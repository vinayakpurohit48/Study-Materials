#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=0,b=1,c;
clrscr();
printf("enter number: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d  ",a);
c=a+b;
a=b;
b=c;
}
getch();
}