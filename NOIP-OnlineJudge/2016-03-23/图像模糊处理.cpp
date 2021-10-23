#include<iostream>
using namespace std;
int main()
{
	freopen("mmcl.in","r",stdin);
	freopen("mmcl.out","w",stdout);
	short a,b;
	cin>>a>>b;
	short img[100][100];
	short img2[100][100];
	for(int i1=0;i1<a;i1++)
		for(int i2=0;i2<b;i2++)
		{
			cin>>img[i1][i2];
		}
	for(int i1=0;i1<a;i1++)
		for(int i2=0;i2<b;i2++)
		{
			if(i1==0||i2==0||i1==a-1||i2==b-1)
			{
				img2[i1][i2]=img[i1][i2];
				continue;
			}
			else img2[i1][i2]=(img[i1][i2]+img[i1-1][i2]+img[i1+1][i2]+img[i1][i2+1]+img[i1][i2-1])/5;
		}
	for(int i1=0;i1<a;i1++)
	{
		for(int i2=0;i2<b;i2++)
		{
			cout<<img2[i1][i2]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
