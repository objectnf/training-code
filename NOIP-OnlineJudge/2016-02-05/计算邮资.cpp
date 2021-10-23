#include<iostream>
using namespace std;
int main()
{
    int a;
    char b;
    cin>>a>>b;
    int sum=0;
    if(a<=1000) sum=sum+8;
    else if(a>1000)
    {
        int c=a-1000;
        if(c%500==0)    c=c/500;
        else c=c/500+1;
        sum=sum+8+c*4;
    }
    if(b=='y')  sum=sum+5;
    cout<<sum;
    return 0;
}
