#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		printf("positive");
	}else if(n==0)
	{
		printf("zero");
	}else if(n<0)
	{
		printf("negative");
	}
	return 0;
}
