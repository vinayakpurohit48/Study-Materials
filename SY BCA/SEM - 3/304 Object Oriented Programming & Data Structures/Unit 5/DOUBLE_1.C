#include<stdio.h>
const int n=5;
	int q[5];
	int f=-1;
	int r=-1;

void insert_r(int data)
{
	if(r==n-1)
	{
		printf("\nQ Overflow from right side");
		return;
	}
	r++;
	q[r]=data;
	if(f==-1)
		f=0;
}
int del_l()
{
	int data;
	if(f==-1)
	{
		printf("\nQ underflow");
		return 0;
	}
	data=q[f];
	q[f]=0;
	if(f==r)
		f=r=-1;
	else
		f++;
	return data;
}
void insert_l(int data)
{
	if(f==0)
	{
		printf("\nQ overflow from left side");
		return;
	}
	if(f==-1)
		f=r=n-1;
	else
		f--;
	q[f]=data;
}
int del_r()
{
	int data;
	if(r==-1)
	{
		printf("\nQ underflow");
		return 0;
	}
	data=q[r];
	q[r]=0;
	if(f==r)
		f=r=-1;
	else
		r--;
	return data;
}
void disp()
{
	int i;
	if(f==-1)
		printf("\nQ s empty");
	else
	{
		for(i=0;i<=n-1;i++)
			printf("\t%d ",q[i]);
	}
}
void main()
{
	int ch,e,p;
	char side,rside,io;
	printf("\n\tInput Restricted(i)\n\tOutput Restricted(o):");
	flushall();
	scanf("%s",&io);
	printf("\n\tEnter restricted side(l/r) : ");
	flushall();
	scanf("%s",&rside);
	do
	{
		clrscr();
		printf("\n1)Insert");
		printf("\n2)Delete");
		printf("\n3)Display");
		printf("\n4)Exit");
		printf("\n\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter no:");
				scanf("%d",&e);
				if(io=='i')
				{
					if(rside=='l')
						insert_r(e);
					else
						insert_l(e);
				}
				else
				{
					printf("Enter side(Left/Right) : ");
					flushall();
					scanf("%s",&side);
					if(side=='r' || side=='R')
						insert_r(e);
					else if(side=='l' || side=='L')
						insert_l(e);
				}
				getch();
			break;
			case 2:
				if(io=='o')
				{
					if(rside=='l' || rside=='L')
						e=del_r();
					else
						e=del_l();
				}
				else
				{
					printf("\nEnter side(left/right):");
					flushall();
					scanf("%s",&side);
					if(side=='r' || side=='R')
					       e=del_r();
					else if(side=='l' || side=='L')
						e=del_l();

				}
			break;
			case 3:
				disp();
			break;
			case 4:
				printf("\nBye....Bye...");
			break;
			default:
				printf("\ninvalid Choice");
			break;
		}
	}while(ch!=4);
}