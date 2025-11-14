#include<stdio.h>
int main()
{
	int a[3][4],i,j;
	printf("enter array elements:");
	for(i=0;i<3;i++)
	{
		for(i=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	printf("array elements are:\n");
	for(i=0;i<3;i++)
	{
		for(i=0;j<4;j++)
		printf("&d\t",a[i][j]);
		printf("\n");
		}	
		return 0;
	
}

