#include<iostream>
#include<vector>
using namespace std;
class LLNode
{
     public:
         int val;
         LLNode *next;
};
vector<int> arr;
LLNode* solve(LLNode* node, int k) {
    if(k==0)
        return node;
    LLNode *temp=node, *start=node, *end=node;
    int count=1;
    while(end->next != NULL)
    {
        end=end->next;
        count++;
    }
    end->next=start;
    cout<<k<<" ";
    k=k%count;
    //k++;
    k=count-k;
    cout << k;
    if(k==0)
        return node;
    while(k>0)
    {
        start=start->next;
        k--;
    }
    while(end->next!=start)
    {
        end=end->next;
    }
    end->next=NULL;
    return start;
}
int main()
{
    return 0;
}
