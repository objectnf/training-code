#include<stdio.h>
int main()
{
	int n,x,y,z,a;
	scanf("%d%d%d",&n,&x,&y);
	if((y/x)>=n)
	{
		printf("0");
	}else
	if((y%x)==0)
	{
		z=y/x;
		a=n-z;
		printf("%d",a);
	}else
	{
		z=y/x;
		z=z+1;
		a=n-z;
		printf("%d",a);
	}
	return 0;
}
