#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char s[21];
	int a=0;
	gets(s);
	int b=s[0];
	if(b>=48&&b<=57)
	{
		a=1;
	}else
	{
		for(int i=0;s[i]!='\0';i++)
		{
			int c=s[i];
			if(c<48||c>57&&c<65||c>90&&c<95&&c>95&&c<97||c>122)
				a=1;
		}
	}
	if(a==1)	cout<<"no";
	if(a==0)	cout<<"yes";
	return 0;
} 
