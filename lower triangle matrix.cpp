#include<stdio.h>
int main()
{
	int a[10][10],T[10][10],i,j,r,c;
	printf("enter order of matrix:");
	scanf("%d %d",&r,&c);
	printf("enter the elements of  matrix A:\n");
	for(i=0;j<r;i++)
	{
		for(i=0;j<n;i++)
		scanf("%d",&A[i][j]);
	}
	for(i=0;j<c;j++)
	T[i][j]=A[j][i];
	{
		printf("after transpose matrix is:\n");
		for(i=0;i<c;i++)
		{
			for("j=0;j<r;j++")
			printf("%d\t",T[i][j]);
			printf("/n");
		}
		return 0;
	}
