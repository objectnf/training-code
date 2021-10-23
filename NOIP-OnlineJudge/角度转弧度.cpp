#include<stdio.h>
int main()
{
	double a=0,b=0,c=0,pi=3.1415926535898;
	printf("本程序用于将角度转换为弧度。\n");
	printf("此程序中π值为3.1415926536。\n");
	printf("请输入角度值：\n");
	scanf("%lf",&a);
	b=pi/180;
	c=a*b;
	printf("弧度值为：\n");
	printf("%.10lf",c);
	getchar(); getchar();
	return 0;
}
