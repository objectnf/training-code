#include<iostream>
#include<cstdio>
using namespace std;
int Max(int x,int y)
{
	int result;
	//if (x>=y) return x;
	//else return y;
	return x>y?x:y;
}
int main()
{
	int a,b,max;
	cin>>a>>b;
	max=Max(a,b);
	cout<<max;
	return 0;
}
