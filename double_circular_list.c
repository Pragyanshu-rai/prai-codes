#include<stdio.h>
#include<stdlib.h>
//cyclic linked list node
typedef struct cdlist_tag
{
    int data;
    struct cdlist_tag *prev;
    struct cdlist_tag *next;
}CDListNode; 

//first and last node pointer
typedef struct 
{
    CDListNode *first;
    CDListNode *last;
}cdlist;

cdlist *lp;
//cyclic double linked list 
void insert_cyclic_double_list(cdlist *lp, int t)
{
    
    // create a new node using malloc
    CDListNode *new_node = (CDListNode *)malloc(sizeof(CDListNode));
    
    // copy the value of variable t to the new_node -> data;
    new_node->data = t;

    // if the lp is null
    if(lp == NULL)
    {
        // create a new lp 
        lp = (cdlist *)malloc(sizeof(cdlist));    
    }    
    // if the lp's first pointer points to null which means that there is no node in the list
    if(lp->first == NULL)
    {
        // add the new_node directly to the list
         
        // lp first will point to the new node
        lp->first = new_node;
        
        // lp last whill also point to the new node
        lp->last = new_node;
    
        // new node's next node will be the same node
        new_node->next = new_node;
        
        // new nodes prev node will also bw the same node
        new_node->prev = new_node;
    }
    // if the lsit is not empty and contains a few nodes
    else
    {
        
        // lp's first node's prev node will be the new node
        lp->first->prev = new_node;
        
        // new_node's next node willl be the lp's first node "cycle"
        new_node->next = lp->first;
        
        // lp's last node's next node will be the new_node
        lp->last->next = new_node;
        
        // new_node's prev node will be the lp's last node "double linked list"
        new_node->prev = lp->last;
        
        // at last the lp's last node will be updated with the new_node as it will be the last now
        lp->last = new_node;        
    }
}

void printit(CDListNode *start)
{
    CDListNode *temp = (CDListNode *)malloc(sizeof(CDListNode));
    
    temp = start;
    printf("%d ", temp->data);
    temp=temp->next;
    while(temp != start)
    {
        printf("%d ", temp->data); 
        temp = temp->next;   
    }
    printf("\nreverse\n");
    
    temp = start;
    printf("%d ", temp->data);
    temp=temp->prev;
    while(temp != start)
    {
        printf("%d ", temp->data); 
        temp = temp->prev;   
    }
    printf("\n");
}
int main()
{
    
    lp = (cdlist *)malloc(sizeof(cdlist));

    for(int number = 0; number < 21; number++)
        insert_cyclic_double_list(lp, number);
    
    printit(lp->first->next->next->next);
    return 0;
}
