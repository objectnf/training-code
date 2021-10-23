/*
 * 简单算术表达式求值.cpp
 *
 *  Created on: 2016年1月11日
 *      Author: Administrator
 */

#include<stdio.h>
int Plus(int a1,int a2)
{
	int result=a1+a2;
	return result;
}
int Minus(int a3,int a4)
{
	int result=a3-a4;
	return result;
}
int Multi(int a5,int a6)
{
	int result=a5*a6;
	return result;
}
int Divis(int a7,int a8)
{
	int result=a7/a8;
	return result;
}
int Remain(int a9,int a10)
{
	int result=a9%a10;
	return result;
}
int  main()
{
	int x,y,answer;
	char n;
	scanf("%d",&x);
	for(;;)
	{
		scanf("%c",&n);
		if(n!=' ')   break;
	}
	scanf("%d",&y);
	if(n=='+')
	{
		answer=Plus(x,y);
	}
	else if(n=='-')
	{
		answer=Minus(x,y);
	}
	else if(n=='*')
	{
		answer=Multi(x,y);
	}
	else if(n=='/')
	{
		answer=Divis(x,y);
	}
	else if(n=='%')
	{
		answer=Remain(x,y);
	}
	printf("%d",answer);
	getchar(); getchar();
	return 0;
}
