#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%3==0&&n%2!=0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
