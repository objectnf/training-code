#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    double x=b/a;
    int y;
    if(b%a==0)  y=x;
    else y=(int)x+1;
    if(n-y<0)   cout<<0;
    else    cout<<n-y;
    return 0;
}
