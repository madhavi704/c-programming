// largest number of list of numbers
#include<stdio.h>
int main()
{
	int a[10],n ,i,largest;
	printf("enter number of elements: ");
	scanf("%d",&n);
	printf("enter array elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for (i=1;i<n;i++)
	{
		if(largest<a[i])
		{
			largesta=[i];
		}
	}
}
