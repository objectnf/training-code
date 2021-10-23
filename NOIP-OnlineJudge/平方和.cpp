#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,m=0,n=0,i=0,t=0,result=0;
    printf("该程序计算a的m次方与b的n次方之和。\n");
    printf("请输入a的值：\n");
    scanf("%d",&a);
    printf("请输入b的值：\n");
    scanf("%d",&b);
    printf("请输入m的值：\n");
    scanf("%d",&m);
    printf("请输入n的值：\n");
    scanf("%d",&n);
    c=a;
    d=b;
    for(i=2;i<=m;i++)
    {
    	c=c*a;
	}
	for(t=2;t<=n;t++)
	{
		d=d*b;
	}
	result=c+d;
	printf("平方和为：\n");
	printf("%d",result);
    getchar(); getchar();
    return 0;
}
