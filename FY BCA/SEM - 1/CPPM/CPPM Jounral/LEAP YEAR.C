#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();

     printf("enter the year to check: ");
     scanf("%d",&year);
if(year % 400==0)
{
printf("the %d is a leap year",year);
}

else if(year % 100==0)
{
printf("the %d is not a leap year",year);
}

else if(year % 4==0)
{
printf("the %d is a leap year",year);
}

else
{
printf("the %d is not a leap year",year);
}
getch();
}