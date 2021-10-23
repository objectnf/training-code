#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	cout<<"输入a的值为：";
	cin>>a;
	cout<<"输入b的值为：";
	cin>>b;
	c=b;
	b=a;
	a=c;
	cout<<"交换后的a为："<<a<<endl;
	cout<<"交换后的b为："<<b<<endl;
	system("pause");
	return 0;
 } 
