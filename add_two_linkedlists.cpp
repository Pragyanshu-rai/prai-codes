#include<iostream>
#include "sll.h"
using namespace std;
using namespace link;
Node* addTwoNumbers(Node* l1, Node* l2) {
    int carry=0;
    Node *head=NULL, *temp=NULL;
    while(l1!=NULL or l2!=NULL or carry!=0)
    {
        int sum=0;
        if(l2!=NULL)
        {
            sum += l2->data;
            l2 = l2->next;
        }
        if(l1!=NULL)
        {
            sum += l1->data;
            l1 = l1->next;
        }
        sum += carry;
        carry = sum/10;
        if(sum >= 10)
        {
            cout << sum <<" "<<carry<<endl;
            sum %= 10;
        }
        cout << sum << " " << carry <<endl;
        Node *nn = new Node(sum);
        if(head == NULL)
        {
            head = nn;
            head->next = NULL;
            temp=head;
        }
        else
        {
            temp->next = nn;
            temp=temp->next;
        }
    }
    return head;
}
int main()
{
    
    return 0;
}

