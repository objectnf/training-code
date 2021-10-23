#include<stdio.h>
#include<iostream>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d%d\n",a,b);
	system("pause");
	return 0;
}
