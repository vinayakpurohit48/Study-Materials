#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int a[3][3],b[3][3],result[3][3],i,j,k,choice;
	clrscr();
	printf("           !!Enter the element of matrics A !!");

	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	     printf("\nPlease Enter Number of elements in an array for %d,%d : ",i+1,j+1);
	     scanf("%d", &a[i][j]);
	  }
	}

	printf("           !!Enter the element of matrics B !!");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	     printf("\nPlease Enter Number of elements in an array for %d,%d : ",i+1,j+1);
	     scanf("%d", &b[i][j]);
	  }
	}

	printf("Enter your choice: \n1. addition \n2.subtraction \n3. multiply \n4.transpose \n5.exit");
	scanf("%d",&choice);

	   switch(choice)
	     {
		case 1:
		printf("Printing the addition of matrics:");
		for(i=0;i<3;i++)
		 {
		   for(j=0;j<3;j++)
		     {
			printf("%d\t",a[i][j]+b[i][j]);
		     }
		     printf("\n");
		 }
	 break;

		case 2:
		printf("Printing the subtraction of matrics:");
		for(i=0;i<3;i++)
		 {
		   for(j=0;j<3;j++)
		     {
			printf("%d\t",a[i][j]-b[i][j]);
		     }
		     printf("\n");
		 }
	 break;

		case 3:
		printf("Printing the multiplication of matrics:\n");
		for(i=0;i<3;i++)
		 {
		   for(j=0;j<3;j++)
		     {
		       for(k=0;k<3;k++)
		       {
			 result[i][j]+=a[i][k]+b[k][j];
		       }
		     }
		 }

		 for(i=0;i<3;i++)
		 {
		   for(j=0;j<3;j++)
		     {
			printf("%d\t",result[i][j]);
		     }
		     printf("\n");
		 }
	 break;
		case 4:
		printf("which matrics you want to make transpose:\n");
		printf("1.for matrics A \n2.for matrics B");
		scanf("%d",&choice);
		if(choice==1)
		{
		  printf("\nPrinting the transpose of a matrics A:\n");
		  for(i=0;i<3;i++)
		   {
		   for(j=0;j<3;j++)
		     {
		      printf("%d\t",a[j][i]);
		     }
		     printf("\n");
		   }
		  }
		else if(choice == 2)
		 {
			printf("\nPrinting the transpose of a matrics B :\n");
				for(i=0;i<3;i++)
				 {
				    for(j=0;j<3;j++)
				     {
					printf("%d\t",b[j][i]);
				     }
				     printf("\n");
		   }		 }
		 else
		 {
		  printf("ERROR !!! incorrect chioce");
		 }

	 break;
	       case 5:

	       break;
default:
printf("!!WRONG!! \nare anpadh pahle choice to dekh le 1 to 5 hi h");
}
getch();
}


