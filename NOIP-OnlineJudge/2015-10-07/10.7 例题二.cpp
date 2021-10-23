#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0; 
	cout<<"输入a的值：";
	cin>>a;
	cout<<"输入b的值：";
	cin>>b;
	c=a/b;
	d=a%b;
	cout<<"a除以b的商为："<<c<<endl;
	cout<<"a除以b的余数为："<<d<<endl;
	system("pause");
	return 0;
}
