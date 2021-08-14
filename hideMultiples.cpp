//TO-DO: Fill in the Authors Name Here
//TO-DO: Fill in the current date here
//CS1428 Lab
//Lab 5
//Description: this program will print a numerical sequence with user-input length

//****************This is the line of 80 characters in length******************
//############Your code should not exceed the length of the above line#########

#include <iostream>
using namespace std;

int main()
{
    int length, hidden_multiple;

    cout << "Sequence Generator 2000!" << endl
         << "Enter The length: ";
    cin >> length;
    cout << "Multiples of what number should be hidden: ";
    cin >> hidden_multiple;
    cout << endl;

    //TO-DO: Validate input, then print the sequence:
    //My modification to the code

    //Checking that the length and hidden_multiple is greater than zero else
    //throw an error with an appropriate message
    if (length < 1 or hidden_multiple < 1)
    {
        //Printing the required error message if the inputs are not valid
        cout << "ERROR: number and multiples must be larger than 0.";
    }

    //If the inputs are valid then we compute the number and print the
    //sequence in required format
    else
    {
        //print the first '|'
        cout << "| ";

        //Running a for loop from 1 to length both inclusive
        //Creating a local variable number inside the scope of for loop
        //inorder to loop from 1 to length both inclusive
        for (int number = 1; number <= length; number++)
        {
            //if the number is a multiple of the hiden_multiple
            //then print '#'(pound or hash) character
            //A number x is a multiple of the number y if
            //x%y == 0 i.e the remainder of x/y is zero.
            if (number % hidden_multiple == 0)
            {
                cout << '#';
            }

            //else print the number directly
            else
            {
                cout << number;
            }

            //print the character '|' after every number or hash
            cout << " | ";
        }
    }

    cout << endl;

    return 0;
}