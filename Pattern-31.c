#include<stdio.h>
#include<string.h>
main()
{
	int i,n,no,j,x;
	printf("Enter limit=> ");
	scanf("%d",&no);
	x=no;
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=no;j>=i;j--)
		{
			printf("*");
		}
	    printf("\n");
	}
	for(i=1;i<=no;i++)
	{
	
		for(j=no;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	    printf("\n");
	}

}
