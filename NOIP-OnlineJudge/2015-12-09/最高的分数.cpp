#include<stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	for(int n=0;n<a;n++)
	{
		int c;
		scanf("%d",&c);
		if(b==0)
		{
			b=c;
			continue;
		}
		else if(c<=b)
		{
			continue;
		}
		else if(c>b)
		{
			b=c;
			continue;
		}
	}
	printf("%d",b);
	return 0;
}
