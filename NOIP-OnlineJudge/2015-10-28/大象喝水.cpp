#include<stdio.h>
#define pi 3.14159
int main()
{
	int h,r,v,q;
	scanf("%d%d",&h,&r);
	q=((20*1000)/(pi*r*r*h))+1;
	printf("%d",q);
	return 0;
}
