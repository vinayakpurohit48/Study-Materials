#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char s1[10],s2[10];
     int cmp;
     clrscr();
     printf("str=");
     scanf("%s",&s1);

      strcpy(s2,s1);
      strrev(s2);

    cmp = strcmp(s1,s2);

     if(cmp==0)
    {
       printf("string is palindrome");
    }
     else
    {
      printf("string is not palindrome");
    }
  getch();
}

