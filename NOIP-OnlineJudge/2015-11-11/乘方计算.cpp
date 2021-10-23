#include<stdio.h>
int main()
{
	long long int a=0,b=0,i=0;
	scanf("%d%d",&a,&b);
	long long c=a;
	if(b == 1)
	{
		printf("%d",c);
	}
	else if(b > 1)
	{
		for(i=2;i<=b;i++)
		{
		   c=c*a;
		}
		printf("%d",c);
	}
	return 0;
}
