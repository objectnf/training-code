#include<stdio.h>
#include<iostream>
int main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d%d\n",a,b);
	system("pause");
	return 0;
}
