#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //int a[10]={1,4,2,6,3,9,8,5,7,0};
    double a[10]={1.2,6.4,5.6,8.9,2.3,4.5,7.3,6.4,0.3,7.1};
    for(int i=0;i<10;i++)
        {
        	cout<<a[i]<<" ";
		}
    cout<<endl;
    //sort(a,a+10);
    //sort(a,a+10,greater<int>());
    sort(a,a+10,less<double>());
    for(int i=0;i<10;i++)
    {
    	cout<<a[i]<<" ";
	}
    return 0;
}
