//不借助第三变量交换两变量的值。 
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	cout<<"输入a的值为：";
	cin>>a;
	cout<<"输入b的值为：";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"交换后的a为："<<a<<endl;
	cout<<"交换后的b为："<<b<<endl;
	system("pause");
	return 0;
 } 
