#include<iostream>
using namespace std;
int main()
{
	int a,b,d=0;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		int c;
		cin>>c;
		if(c==b)
		{
			d++;
		}
	}
	cout<<d;
	return 0;
 } 
