#include<iostream>
#include<cstdio>
using namespace std;
int Average(int x,int y)
{
	int result;
	result=(x+y)/2;
	return result;
}
int main()
{
	int a,b,ave;
	cin>>a>>b;
	ave=Average(a,b);
	cout<<ave;
	return 0;
}
