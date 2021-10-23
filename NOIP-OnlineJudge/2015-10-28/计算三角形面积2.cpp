#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,l1,l2,l3,r,s;
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	l1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	l2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	l3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	r=(l1+l2+l3)/2;
	s=sqrt(r*(r-l1)*(r-l2)*(r-l3));
	printf("%.2f",s);
	return 0;
}
