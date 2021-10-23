#include<stdio.h>
int main()
{
	double i;
	scanf("%lf",&i);
    if(i>=0)
    {
    	printf("%.2lf",i);
	}else if(i<0)
	{
		printf("%.2lf",-i);
	}
    return 0;
}
