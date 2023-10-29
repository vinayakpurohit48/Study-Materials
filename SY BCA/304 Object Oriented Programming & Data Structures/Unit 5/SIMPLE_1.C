#include<stdio.h>
#include<conio.h>
int n=5;

int q[5];
int f=-1,r=-1;

void insert(int data)
{
	if(r==n-1)
	{
		printf("\nQ overflow");
		getch();
		return;
	}
	r++;
	q[r]=data;
	if(f==-1)
		f=0;
}
int del()
{
	int data;

	data=q[f];
	if(f==r)
		f=r=-1;
	else
		f++;
	return data;
}
void disp()
{
	int i;
	if(f==-1)
		printf("\nQ is empty");
	else
	{
		for(i=f;i<=r;i++)
	{
			printf("\t%d",q[i]);
		}
	}
}
void main()
{
	int ch,e,p;

	clrscr();
	do
	{
		clrscr();
		printf("\n1)Insert");
		printf("\n2)Delete");
		printf("\n3)Display");
		printf("\n4)Exit");
		printf("\n\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter element : ");
				scanf("%d",&e);
				insert(e);
			break;
			case 2:
				e=del();
				printf("\nThe deleted elemnt is : %d",e);
				getch();
			break;
			case 3:
				disp();
				getch();
			break;
		}
	}while(ch!=4);
	getch();
}
