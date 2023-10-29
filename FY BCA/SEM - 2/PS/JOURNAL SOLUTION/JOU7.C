#include<stdio.h>
#include<conio.h>
#include<string.h>
void palin(char s1[])
{
  int cmp;
  char s2[1000];
  strcpy(s2,s1);
  strrev(s2);
  cmp = strcmp(s1,s2);
  if(cmp == 0)
  {
   printf("The string %s is palindrome",s1);
  }
  else
  {
   printf("string is not palindrome");
  }
}
void main()
{
    char str[1000];
    clrscr();
    printf("enter the string: ");
    gets(str);
    palin(str);
getch();
}