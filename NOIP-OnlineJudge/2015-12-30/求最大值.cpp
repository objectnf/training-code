#include<iostream>
#include<cstdio>
using namespace std;
int Max(int x,int y)
{
	int result;
	if (x>=y) result=x;
	else result=y;
	return result;
}
int main()
{
	int a,b,max;
	cin>>a>>b;
	max=Max(a,b);
	cout<<max;
	return 0;
}
