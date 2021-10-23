#include<iostream>
#include<algorithm>
using namespace std;
int n,a[100000];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    sort(a,a+n,less<int>());
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]!=a[i])    cout<<a[i-1]<<" ";
    }
    return 0;
}
