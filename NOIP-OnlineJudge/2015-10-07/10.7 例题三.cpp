#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	cout<<"输入第一个正整数：" ;
	cin>>x;
	cout<<"输入第二个正整数：";
	cin>>y;
	if(x>y)
	{
		cout<<"两个数字中最大的是："<<x<<endl; 
		system("pause");
		return 0;
	}else if(x==y)
	{
		cout<<"两个数字一样大。"<<endl;
		system("pause");
		return 0;
	}else if(x<y)
	{
		cout<<"两个数字中最大的是："<<y<<endl;
		system("pause");
		return 0;
	}
	else
	return 0; 
}
