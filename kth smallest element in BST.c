#include<stdio.h>
#include<stdlib.h>
#define max 100

struct create{
	int data;
	struct create *left;
	struct create *right;
};

int A[max],sum,m=0,top=0,k=0,temp;

struct create *stack[max];
struct create *createbst(struct create *root,int item)
{
	struct create *newnode,*ptr,*p;
	newnode=(struct create*)malloc(sizeof(struct create));
	if(newnode==NULL)
	{
		printf("Underflow condition\n");
		exit(0);
	}
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		ptr=root;
		p=NULL;
		while(ptr!=NULL)
		{
			p=ptr;
			if(item<=ptr->data)
			{
				ptr=ptr->left;
			}
			else
			{
				ptr=ptr->right;
			}
		}
		if(item<p->data)
		{
			p->left=newnode;
		}
		else
		{
			p->right=newnode;
		}
	}
	return root;
}
struct create *inorder(struct create*root,int m)
{
	struct create *ptr;
	stack[top]=NULL;
	ptr=root;
	while(ptr!=NULL)
	{
		top=top+1;
		stack[top]=ptr;
		ptr=ptr->left;
	}
	ptr=stack[top];
	top=top-1;
	while(ptr!=NULL)
	{
		A[k]=ptr->data;
		k++;
		if(ptr->right!=NULL)
		{
			ptr=ptr->right;
			while(ptr!=NULL)
			{
				top=top+1;
				stack[top]=ptr;
				ptr=ptr->left;
			}
		}
		ptr=stack[top];
		top=top-1;
	}
	printf("Kth smallest element is %d ",A[m-1]);
	return root;
}

int main()
{
	int ele,i,j,k;
	struct create *root=NULL;
	struct create *c;
	printf("Enter 00 to terminate\n");
	printf(" Input Data::");
	scanf("%d",&ele);
	while(ele!=00)
	{
		root=createbst(root,ele);
		printf("Input Data::");
		scanf("%d",&ele);
	}
	printf("Enter the value of k:\n");
	scanf("%d",&k);

	inorder(root,k);

return 0;
}


