#include<iostream>
using namespace std;
class LLNode
{
    public:
        int val;
        LLNode *next;
};
LLNode *start=NULL;
LLNode* fold(LLNode* node) {
    if(node==NULL)
        return node;
    int size=1,index=0;
    LLNode  *start=node, *end=node, *mid=node, *key;
    while(end->next!=NULL)
    {
        end=end->next;
        size++;
    }
    size/=2;
    //cout << end->val<<endl;
    while(index<size)
    {
        mid=mid->next;
        index++;
    }
    while(size>0)
    {
        key=start;
        while(key->next!=end) key=key->next;
        //cout << start->val << "  " << end->val;
        end->val = end->val + start->val;
        start=start->next;
        end=key;
        size--;
    }
    return mid;
}
int insert(int data)
{
    LLNode *nn = new LLNode();
    nn->val=data;
    if(start!=NULL)
    {
        LLNode *temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next = nn;  
    }
    else
    {
        start=nn;    
    }    
    return nn->val;
}
void display()
{
    LLNode *temp=start;
    while(temp!=NULL)
    {
        cout <<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int in,data;
    while(1)
    {
        printf("enter 1-insert  2-display  3-fold\n->");
        scanf("%d", &in);
        switch(in)
        {
            case 1: printf("Enter the data\n->");
                    scanf("%d", &data);
                    printf("%d insterted\n", insert(data));
                    break;
            case 2: display();
                    break;
            case 3: start = fold(start);
                    display();
                    break;
            default : printf("closing ......./\n"); 
                    exit(1);       
        }
    }
    return 0;
}
