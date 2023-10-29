#include<stdio.h>
#include<conio.h>
int n=5;
int s[5];
int top=-1;
// Declaration
	void push(int);
	int pop();
	int peep(int);
	void change(int,int);
	void disp();
	void isempty();
	void isfull();

void main()
{
	int ch,data,i;
	clrscr();
	do
	{
	clrscr();
	printf("\n1) Push");
	printf("\n2) Pop");
	printf("\n3) Disp");
	printf("\n4) Peep");
	printf("\n5) Change");
	printf("\n6) Is Empty");
	printf("\n7) Is Full");
	printf("\n8) Exit");
	printf("\n\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter data:");
			scanf("%d",&data);
			if(top==n-1)
			{
				printf("\nStack is Overflow");
				return;	
			}
			push(data);
		break;
		case 2:
			data=pop();
			if(data==0)
				printf("\nstack is empty");
			else
				printf("\npoped element is: %d",data);
				getch();
		break;
		case 3:
			disp();
			getch();
		break;
		case 4:
			printf("\nEnter position:");
			scanf("%d",&i);
			data=peep(i);
			if(data!=0)
				printf("\nThe peeped element is: %d",data);
			getch();
		break;
		case 5:
			printf("\nEnter position:");
			scanf("%d",&i);
			printf("\nEnter element:");
			scanf("%d",&data);
			change(i,data);
			getch();
		break;
		case 6:
			isempty();
			getch();
		break;
		case 7:
			isfull();
			getch();
		break;
		case 8:
			printf("\nBye.. Bye...");
		break;

		default:
			printf("\nWrong Choice");
	}
	}while(ch!=8);
	getch();
}

//Defination

void push(int data)
{
	top=top+1;
	s[top]=data;
}
int pop()
{
	int data;
	if(top==-1)
	{
		printf("\nStack is Underflow");
		return 0;
	}
	data=s[top];
	top--;
	return data;
}
void disp()
{
	int i;
	if(top==-1)
	{
		printf("\n stack is empty");
		return;
	}
	for(i=top;i>=0;i--)
	{
		printf("\n %d",s[i]);
	}
}
void isempty()
{
	if(top==-1)
		printf("\n Stack is empty");
	else
		printf("\n Stack is not empty");

}

void isfull()
{
	if(top==n-1)
		printf("\n Stack is full");
	else
		printf("\n Stack is not full");
}
int peep(int i)
{
	if(top-i+1<0)
	{
		printf("\n Stack is uderflow on peep");
		return 0;
	}
	return s[top-i+1];
}
void change(int i,int x)
{
	if(top-i+1<0)
	{
		printf("\n Stack is underflow on change");
		return;
	}
	s[top-i+1]=x;
}