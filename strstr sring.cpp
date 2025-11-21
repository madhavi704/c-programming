#include<stdio.h>
#include<string.h>
int main()
{
	char s[10]="computer";
	char*result=strstr(s,"put");
	if(result!=NULL)
	printf("found");
	else
	printf("not found");
	return 0;
}
