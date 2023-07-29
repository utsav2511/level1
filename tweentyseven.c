#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=n;i>=0;i--)
	{
		for(int j=i;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}


}

