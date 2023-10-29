#include<stdio.h>
#include<conio.h>
void order(int arr[], int n)
{
  int i,j,temp;
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i]<arr[j])
      {
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
      }
    }
  }
  printf("The array in ascending order: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
      }
    }
  }
  printf("\nThe array in descending order: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}
void main()
{
    int arr[100],n,i;
    clrscr();
    printf("Enter the size of array between 100: ");
    scanf("%d",&n);

    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

    order(arr,n);

getch();
}