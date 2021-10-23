#include<stdio.h>
#include<math.h>
int main()
{
	double xa,xb,ya,yb,c;
	scanf("%lf%lf\n%lf%lf",&xa,&ya,&xb,&yb);
	c=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	printf("%.3lf",c);
	return 0;
}
