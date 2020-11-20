#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;
node *root=NULL;
node* max(node* root)
{
    if(!root)
        return NULL;
    node *temp=root;
    while(temp->right)
        temp=temp->right;
    return temp;
}
int inorder(node* root)
{
    if(!root)
        return 0;
    inorder(root->left);
    printf("%3d\n",root->data);
    inorder(root->right);
}
node* find(node* root,int data)
{
    node *temp=root;
    while(temp)
    {
        if(data==temp->data)
            return temp;
        else if(data>temp->data)
            temp=temp->right;
        else if(data<temp->data)
            temp=temp->left;
    }    
    return NULL;
}
node* insert(node* root,int data)
{
    if(!root)
    {
        root=(node*)malloc(sizeof(node));
        root->right=root->left=NULL;
        root->data=data;
        return root;
    }
    if(data<root->data)
        root->left=insert(root->left,data);
    else if(data>root->data)
        root->right=insert(root->right,data);
    return root;
}
node* delete(node* root,int data)
{
    node *temp;
    if(!root)
        printf("\n\tElement not found!!!\n");
    else if(data>root->data)
        root->right=delete(root->right,data);
    else if(data<root->data)
        root->left=delete(root->left,data);
    else
    {
        if(root->left&&root->right)
        {
            temp=max(root->left);
            root->data=temp->data;
            root->left=delete(root->left,root->data);
        }
        else
        {
            temp=root;
            if(!root->left)
                root=root->right;
            else if(!root->right)
                root=root->left;  
        }
    }
    return root;
}
int main()
{
    int size,i,data;
    printf("Enter the size of the input\n>>");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&data);
        if (i==0)
            root=insert(root,data);
        insert(root,data);
    }
    inorder(root);
    delete(root,8);
    inorder(root);
    free(root);
    return 0;
}
