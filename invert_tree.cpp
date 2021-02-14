#include<iostream>
using namespace std;
class Tree{
    public :
        int val;
        Tree *left;
        Tree *right;
};
Tree* swap(Tree* root, Tree* left, Tree* right)
{
    if(root == NULL)
        return NULL;
    Tree* temp = left;
    root->left = right;
    root->right = temp;
    return root;
}
Tree* solve(Tree* root) {
    if(root == NULL)
        return NULL;
    if(root->left == NULL and root->right == NULL)
        return root;
    if(root->right != NULL)
        solve(root->right);
    if(root->left != NULL)
        solve(root->left);
    root = swap(root, root->left, root->right);
    return root;
}
Tree* newnode(int data)
{
    Tree* node = new Tree();
    node -> val = data;
    return node;
}
Tree* insert(Tree* root, int data)
{
    if(!root)
        return newnode(data);
    if(data < root -> val)
        root -> left = insert(root -> left, data);
    else if(data >= root -> val)
        root -> right = insert(root -> right, data);
    return root;
}
int main()
{
    Tree *root = NULL;
    root = insert(root, 21);
    insert(root, 3); 
	insert(root, 6); 
	insert(root, 8); 
	insert(root, 5); 
	insert(root, 2); 
	insert(root, 23); 
	insert(root, 37); 
	insert(root, 31);
    solve(root);
    return 0;
}
