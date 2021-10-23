#include<iostream>
#include <ctype.h>
#include <ctype.h>
using namespace std;
int main()
{
	loop1:long double i=0,a=0,b=0,resulta=0,resultb=0;
    cout<<"请输入氨基酸数：";
    cin>>a;
    if(a<0)
    {
    	cout<<"请输入正整数"<<endl;
    	system("pause");
    	cout<<""<<endl;
        goto loop1;
	}
	else if()
    cout<<""<<endl;
    cout<<"请输入肽链数：";
    cin>>b;
    cout<<""<<endl;
    if(a==b)
        {
        	cout<<"此时无法构成肽键，请重新输入数据！"<<endl;
        	cout<<""<<endl;
        	system("pause");
        	cout<<""<<endl;
        	goto loop1;
		}
        else if(a<b)
        {
        	cout<<"您输入的数据有误，无法计算，请重新输入数据！"<<endl;
        	cout<<""<<endl;
        	system("pause");
        	cout<<""<<endl;
        	goto loop1;
		}
    resulta=a-b;
    resultb=b;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"肽键数为："<<resulta<<endl;
    cout<<""<<endl;
    cout<<"氨基最小数目："<<resultb<<endl;
    cout<<""<<endl;
    cout<<"羧基最小数目："<<resultb<<endl;
    cout<<""<<endl;
    system("pause");
    return 0;
}
