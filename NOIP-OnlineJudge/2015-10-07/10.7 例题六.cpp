#include<iostream>
using namespace std;
int main()
{
	int a=0,sum=0;
	cout<<"请输入一个整数:";
	cin>>a;
	sum=((1+a)*a)/2;
	cout<<"前"<<a<<"个整数之和为：" <<sum<<endl;
	system("pause");
	return 0;
}
