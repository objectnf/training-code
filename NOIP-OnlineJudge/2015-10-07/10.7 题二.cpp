//原题中Float应改为全小写;2与括号之间应有乘号(*)；M值应该输出。 
#include<iostream> 
using namespace std;
int main()
{
	float L,W,H,M;
	cout<<"Input L,W,H:";
	cin>>L>>W>>H;
	M=2*(L*W+L*H+W*H);
	cout<<M;
	system("pause");
	return 0;
}
