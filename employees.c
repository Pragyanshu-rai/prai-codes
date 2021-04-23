#include<stdio.h>

// including the stdlib header file for malloc and exit functions
#include<stdlib.h>

// including the stdbool header file for bool data type
#include<stdbool.h>

// the default char array size you can change the size by changing the number
#define DEFAULT 100

// The employee data type stucture
struct employee{
    int employee_number;
    char *employee_name;
};

// prototype of the make_employee function
struct employee* make_employee(int employee_number, char* employee_name);

// prototype of the free_employee_mem function
void free_employee_mem(struct employee *e);

// prototype of the employee_name_change function
bool employee_name_change(struct employee *e, char* new_name);

int main()
{
    // declaring a struct employee type pointer 
    struct employee *e1;
    
    //  employee_number holds the employee number entered
    int employee_number;
    
    // employee_name holds the employee name entered
    char *employee_name, *new_name;

    // dynamic memory allocation for the employee name char array default size i.e 100, you can change it to any size you want
    employee_name = (char *)malloc(DEFAULT);
    
    // getting the employee id
    printf("Enter The ID Of The Employee : ");
    
    scanf("%d", &employee_number);
    
    // getting the employee name
    printf("Enter The Name Of The Employee : ");
    
    // ignoring the new line character and reading the input until enter is pressed
    scanf("\n%[^\n]c", employee_name);
    
    // creating a dynamically allocated struct employee variable using the make_employee function
    // passing the employee_number and the employee_name
    e1 = make_employee(employee_number, employee_name);
    
    // to show that e1 is created and the data is stored in e1
    printf("Number - %3d\nName - %s\n", e1->employee_number, e1->employee_name);
    
    // dynamic memory allocation for the new name char array default size * 2 i.e 200, you can change it to any size you want
    new_name = (char *)malloc(DEFAULT*2);
    
    // getting the employee name
    printf("\nEnter The New Name Of The Employee : ");
    
    // ignoring the new line character and reading the input until enter is pressed
    scanf("\n%[^\n]c", new_name);
    
    // changeing the name to a new name
    // passing the e1 employee pointer and new_name char array
    employee_name_change(e1, new_name);
    
    // showing wheather the name is changed or not
    printf("\nNumber - %3d\nName - %s\n", e1->employee_number, e1->employee_name);
    
    // deallocating the e1 employee variable
    free_employee_mem(e1);
    
    // showing wheather the memory is released or not
    printf("\nThe Data Is Deleted\nNumber - %3d\nName - %s\n", e1->employee_number, e1->employee_name);
    
    return 0;
}

/*
This function takes employee_number (int) and employee_name (char array) as argument and returns the address of the new dynamically allocated  
 employee variable
*/
struct employee* make_employee(int employee_number, char* employee_name)
{
    struct employee *new_emp;
    
    // dynamically allocating memory to new employee type pointer
    new_emp = (struct employee*)malloc(sizeof(struct employee));
    
    // if the momory was not allocated the go inside
    if(new_emp == NULL)
    {
        // print the error message and exit the program
        printf("\n[ERROR] Unable to allocate memory process killed\n");
        exit(0);
    }
    
    // if the memory was allocated then go inside
    else
    {
        // set the employee numebr and name
        new_emp->employee_number = employee_number;
        new_emp->employee_name = employee_name;
    }

    // return the address of the dynamically allocated employee variable
    return new_emp;
}

// This functions takes a struct employee type pointer and deallocates
void free_employee_mem(struct employee *e)
{
    free(e);
}

/* 
This functions takes struct employee pointer and new name (char array) as arguments and dynamically reallocates the memory for the employe_ename, stores in the new name and returns true if it is allocated and false if not
*/
bool employee_name_change(struct employee *e, char* new_name)
{
    // to count the size of new_name
    int size = 0;
    
    char *employee_name;
    //this loop runs till it encounter  
    while(new_name[size] != '\0')
    {
        size++;    
    }
    
    // backup the old name
    employee_name = e->employee_name;
    
    // size+1 for NULL char \0
    e->employee_name = (char *)malloc(size+1);
    
    // if failed to allocate memory the go inside and return false
    if(e->employee_name == NULL)
    {
        // set the old name 
        e->employee_name = employee_name;
        return false;    
    }
    
    // set the new employee name
    e->employee_name = new_name;
    
    return true;
}
