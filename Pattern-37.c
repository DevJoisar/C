#include<stdio.h>
#include<string.h>
main()
{
	int i,n,x,j,no;
	printf("\nEnter limit=> ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=no;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			printf("  *");
		}
     	printf("\n");
	}
}
