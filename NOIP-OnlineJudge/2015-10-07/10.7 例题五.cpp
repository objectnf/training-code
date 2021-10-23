#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,n=0,sum=0;
	cout<<"请输入一个三位整数：";
	cin>>n;
	a=n%10;
	b=(n/10)%10;
	c=(n/100)%10;
	sum=a+b+c;
	cout<<"三位整数每位数字的累加和为："<<sum<<endl;
	system("pause");
	return 0;
}
