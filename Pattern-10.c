#include<stdio.h>
#include<string.h>
main()
{
	int i,n,no,j;
	printf("\nEnter limit=> ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
	       printf("%d",i);
	    }
		printf("\n"); 
	}


	
}
