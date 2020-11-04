#include<stdio.h>
#include<stdlib.h>
int r=0,rn=0;
struct node
{
	int data;
	struct node *left,*right;
}*nn=NULL,*root=NULL,*cn=NULL;
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
		printf("\t%d",p[i]);
	printf("\n");
} 
void check(struct node* cn,struct node* nn)
{	
	if(cn->data>nn->data)
	{
		if(cn->left==NULL)
		{	
			cn->left=nn;
		}
		else if(cn->left!=NULL)
		{
			check(cn->left,nn);
		}
	}
	else if(cn->data<nn->data)
	{
		if(cn->right==NULL)
		{
			cn->right=nn;
		}
		else if(cn->right!=NULL)
		{
			check(cn->right,nn);
		}
	}
}
void tree(int in)
{
	if(r==0)
	{
		root=(struct node*)malloc(sizeof(struct node));
		root->data=in;
		root->left=NULL;
		root->right=NULL;
		cn=root;
		r=1;
	}
	else
	{
		nn=(struct node*)malloc(sizeof(struct node));
		nn->data=in;
		nn->left=NULL;
		nn->right=NULL;
		check(cn,nn);
	}
} 
void print(struct node *cn)
{
	if(cn!=NULL)
	{
		print(cn->left);
	}
	rn++;
	if(cn!=NULL&&rn==2)
	{
		struct node* rn=(struct node*)malloc(sizeof(struct node));
		struct node* ln=(struct node*)malloc(sizeof(struct node));
		if(cn->right!=NULL)
			rn=cn->right;
		else 
			rn->data=-1;
		if(cn->left!=NULL)
			ln=cn->left;
		else 
			ln->data=-1;
		if(cn->data>ln->data&&cn->data>rn->data)
			fact(cn->data);
		else if(ln->data>rn->data&&ln->data>cn->data)
			fact(ln->data);
		else if(rn->data>ln->data&&rn->data>cn->data)
			fact(rn->data);
	}
}
int ptree(struct node *pn)
{
		if(pn!=NULL)
		{
			ptree(pn->left);
			printf("  %d",pn->data);
			ptree(pn->right);
		}
}
int ptree1(struct node *pn)
{
		if(pn!=NULL)
		{
			ptree1(pn->left);
			ptree1(pn->right);
			printf("  %d",pn->data);
		}
}
int ptree2(struct node *pn)
{
		if(pn!=NULL)
		{
			printf("  %d",pn->data);
			ptree2(pn->left);
			ptree2(pn->right);
		}
}
void main()
{
	int i=0,a[11]={7,3,6,8,5,2,23,37,31,69,35};
	//scanf("%d",&n);
	//a=(int *)malloc(sizeof(n*4)+1);
	for(i=0;i<11;i++)
	{
		//scanf("%d",&a[i]);
		tree(a[i]);
	}
	ptree(root);
	printf("\n");
	ptree1(root);
	printf("\n");
	ptree2(root);
	printf("\n");
	print(root);
}
