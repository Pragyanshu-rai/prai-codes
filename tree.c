#include<stdio.h> 
#include<stdlib.h>
int turn=0; 
struct node 
{ 
	int key; 
	struct node *left, *right; 
};  
struct node *newNode(int item) 
{ 
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 
struct node* insert(struct node* node, int key) 
{ 
	if (node == NULL) return newNode(key); 

	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	return node; 
} 
void fact(int x)
{
	int i=1,j=0,*p;
	p=(int *)malloc((x/2)*4);
	for(i;i<=x;i++)
	{		
		if(x%i==0)
		{
			p[j]=i;
			j++;
		}
	}
	for(i=0;i<j;i++)
		printf("%3d",p[i]);
} 
void inorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		printf("%d \n", root->key); 
		inorder(root->right); 
	} 
} 
void print(struct node *cn)
{
	if(cn!=NULL)
	{
		print(cn->left);
	}
	turn++;
	if(cn!=NULL&&turn==3)
	{
		struct node* rn=(struct node*)malloc(sizeof(struct node));
		struct node* ln=(struct node*)malloc(sizeof(struct node));
		if(cn->right!=NULL)
			rn=cn->right;
		else 
			rn->key=-1;
		if(cn->left!=NULL)
			ln=cn->left;
		else 
			ln->key=-1;
		if(cn->key>ln->key&&cn->key>rn->key)
			fact(cn->key);
		else if(ln->key>rn->key&&ln->key>cn->key)
			fact(ln->key);
		else if(rn->key>ln->key&&rn->key>cn->key)
			fact(rn->key);
	}
}
int main() 
{ 
	struct node *root = NULL; 
	root = insert(root, 7); 
	insert(root, 3); 
	insert(root, 6); 
	insert(root, 8); 
	insert(root, 5); 
	insert(root, 2); 
	insert(root, 23); 
	insert(root, 37); 
	insert(root, 31);
	inorder(root);

	return 0; 
} 

