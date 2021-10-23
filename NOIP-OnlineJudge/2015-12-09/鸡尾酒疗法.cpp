#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	double b=1.0*a[0][1]/a[0][0];
	int c[n-1];
	for(int q=1;q<n;q++)
	{
		double d=1.0*a[q][1]/a[q][0];
		if(d>0.05+b)
		{
			printf("better\n");
		}else if(b>0.05+d)
		{
			printf("worse\n");
		}else
		printf("same\n");
	}
	return 0;
}
