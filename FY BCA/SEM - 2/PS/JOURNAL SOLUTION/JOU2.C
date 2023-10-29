#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
   int id[5],salary[5];
   char ename[5][15];
   }e1;
void main()
{
    int i,j;
    clrscr();
    for(i=0;i<5;i++)
    {
      printf("!! Enter the DETAILS of employee : %d!!",i+1);
      printf("\n========================================");
      printf("\nEnter the ID of employee %d : ",i+1);
      scanf("%d",&e1.id[i]);
      fflush(stdin);
      printf("\nEnter the NAME of employee %d : ",i+1);
      scanf("%s",&e1.ename[i]);

      printf("\nEnter the SALARY of employee %d : ",i+1);
      scanf("%d",&e1.salary[i]);
      clrscr();
    }

    for(i=0;i<5;i++)
    {
      if(e1.salary[i]<15000)
      {
	printf("\n==================================");
	printf("\n||  EMP ID     = %d\t\t||\n",e1.id[i]);
	printf("\n||  Emp NAME   = %s\t\t||\n",e1.ename[i]);
	printf("\n||  EMP SALARY = %d\t\t||\n",e1.salary[i]);
      }
	printf("\n");
    }
getch();
}