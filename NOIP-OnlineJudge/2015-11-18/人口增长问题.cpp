#include<stdio.h>
int main()
{
	double n,m;
	scanf("%lf%lf",&n,&m);
	for(int i=0;i<m;i++)
	{
		n=n*1.001;
	}
	printf("%.4lf",n);
	return 0;
}
