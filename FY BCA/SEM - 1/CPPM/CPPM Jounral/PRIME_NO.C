#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
printf("enter the number for check: ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n % i==0)
{
flag++;
}
}
if(flag==2)
{
printf("%d is not prime no.",n);
}
else
{
printf("%d is prime no.",n);
}
getch();
}