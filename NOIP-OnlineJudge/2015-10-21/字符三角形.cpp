#include<iostream>
using namespace std;
int main()
{
	int row,col,n=3;
	char a="";
	cin>>a;
	for(row=n;row>0;row--)
	{
		for(col=0;col<row;col++)
		{
		    cout<<"";		
		}
		for(col=0;col<(n-row)*2+1;col++)
		{
			cout<<a<<endl;
		}
	}
    return 0;
}
