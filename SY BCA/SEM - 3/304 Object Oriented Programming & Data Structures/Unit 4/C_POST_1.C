//Evaluation of Postfix
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int top=-1;
int s[100];

void push(int data)
{
	top++;
	s[top]=data;
}
int pop()
{
	int data;
	data=s[top];
	top--;
	return data;
}
void main()
{
	char postfix[100],temp[10];
	int i,j=0,op1,op2,r;

	clrscr();
	printf("\nEnter postfix expression : ");
	scanf("%s",postfix);
	for(i=0;postfix[i]!='\0';i++)
	{
		switch(postfix[i])
		{
			case '^':
				op2=pop();
				op1=pop();
				r=pow(op1,op2);
				push(r);
			break;
			case '+':
				op2=pop();
				op1=pop();
				r=op1+op2;
				push(r);
			break;
			case '-':
				op2=pop();
				op1=pop();
				r=op1-op2;
				push(r);
			break;
			case '*':
				op2=pop();
				op1=pop();
				r=op1 * op2;
				push(r);
			break;
			case '/':
				op2=pop();
				op1=pop();
				r=op1/op2;
				push(r);
			break;
			case ',':
				if(j!=0)
				{
					temp[j]='\0';
					push(atoi(temp));
					j=0;
				}
			break;
			default:
				temp[j++]=postfix[i];
		}
	}
	printf("\nThe answer is : %d",pop());
	getch();
}
