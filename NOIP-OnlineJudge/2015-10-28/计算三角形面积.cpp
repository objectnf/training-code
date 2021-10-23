#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,r,s;
	scanf("%lf%lf%lf",&a,&b,&c);
	if((c>=(a+b))||(a>=(b+c))||(b>=(a+c)))
	{
		printf("Data Error");
	}else
	{
		r=(a+b+c)/2;
		s=sqrt(r*(r-a)*(r-b)*(r-c));
		printf("%.4lf",s);
	}
	return 0;
}
