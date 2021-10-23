#include<stdio.h>
int main()
{
	long long int a=0,b=2,i=0;
	scanf("%d",&a);
	if(a==0)
	{
		printf("1");
	}
	else
	{
		for(i=2;i<=a;i++)
		{
		b=b*2;
		}
		printf("%d",b);
	}
	return 0;
}
