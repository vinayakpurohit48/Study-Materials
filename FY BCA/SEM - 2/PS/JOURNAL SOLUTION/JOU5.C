#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j,n,cmp;
    char s1[1000][10],temp[10];
    clrscr();
    printf("Enter how many string you want to store: ");
    scanf("%d",&n);
     	

    printf("Enter five string: ");
    for(i=0;i<n;i++)
    {
      scanf("%s",&s1[i]);
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
	cmp = strcmp(s1[i],s1[j]);
	if(cmp<0)
	{
	  strcpy(temp,s1[i]);
	  strcpy(s1[i],s1[j]);
	  strcpy(s1[j],temp);
	}
     }
    }
     printf("Sorted string is : ");
     for(i=0;i<n;i++)
     {
       printf("%s",s1[i]);
     }
getch();
}

