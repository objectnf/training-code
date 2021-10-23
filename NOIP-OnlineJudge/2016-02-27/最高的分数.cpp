#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b[a],maxim=0;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
        if(b[i]>maxim)  maxim=b[i];
    }
    cout<<maxim;
    return 0;
}
