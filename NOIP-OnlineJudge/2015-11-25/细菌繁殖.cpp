#include<stdio.h>
int main()
{
	int a,b=1;
	scanf("%d",&a);
	for(;b<=a;b++)
	{
		int b[5];
		scanf("%d%d%d%d%d",&b[0],&b[1],&b[2],&b[3],&b[4]);
		int c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int d=0;
		for(int f=0;f<b[1];f++)
		{
			d=d+c[f];
		}
		int e=0;
		for(int g=0;g<b[4];g++)
		{
			e=e+c[g];
		}
		d=d+b[1];
		e=e+b[4];
		int day=e-d;
		int sum=b[2];
		for(int sqr=0;sqr<=day-1;sqr++)
		{
			if(day==0)  break;
			sum=sum*2;
		}
		printf("%d",&sum);
		return 0;
	}
}
