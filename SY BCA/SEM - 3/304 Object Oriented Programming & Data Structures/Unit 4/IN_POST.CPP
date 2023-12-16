// Infix to postfix
#include<stdio.h>
#include<conio.h>
const int n=100;
int top=-1;
char s[n];

void push(char data)
{
	top++;
	s[top]=data;
}
char pop()
{
	char data;
	data=s[top];
	top--;
	return data;
}
int priority(char op)
{
	int c=0;
	switch(op)
	{
		case '^':
			c=3;
		break;
		case '*':case '/':
			c=2;
		break;
		case '+':case '-':
			c=1;
		break;
	}
	return c;
}
void main()
{
	char infix[100],postfix[100];
	int i,j=0;

	clrscr();
	printf("\nEnter infix expression:");
	scanf("%s",infix);
	for(i=0;infix[i]!='\0';i++)
	{
		switch(infix[i])
		{
			case '(':
				push(infix[i]);
			break;
			case '^':case '+': case '-': case '*':case '/':
				while(priority(s[top])>=priority(infix[i]))
					postfix[j++]=pop();
				push(infix[i]);
			break;
			case ')':
				while(s[top]!='(')
					postfix[j++]=pop();
				pop();//for remove open breket;
			break;
			default:
				postfix[j++]=infix[i];
			break;
		}
	}
	while(top>=0)
		postfix[j++]=pop();
	postfix[j]='\0';
	printf("\nThe postfix expression s : %s",postfix);
	getch();
}
