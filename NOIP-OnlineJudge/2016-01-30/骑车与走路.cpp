#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a,b;
    a=n*1.0/1.2;
    b=27+23+(n*1.0/3.0);
    if(a==b)    cout<<"All";
    else if(a>b)    cout<<"Bike";
    else cout<<"Walk";
    return 0;
}
