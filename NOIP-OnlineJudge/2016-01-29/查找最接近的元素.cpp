#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int BS(int a[],int thesize,int p);
int a[100000],b[10000];
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)    cin>>b[i];
    sort(a,a+n,less<int>());
    for(int i=0;i<m;i++)
    {
        cout<<a[BS(a,n,b[i])]<<endl;
    }
    return 0;
}
int BS(int a[],int thesize,int p)
{
    int l=0,r=thesize-1;
    int num=r,mid;
    if(p<a[0])  return 0;
    if(p>a[thesize-1])  return thesize-1;
    int Min=abs(a[r]-a[l]);
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(p-a[mid]>0)  r=mid-1;
        else if(p-a[mid]<0)  l=mid+1;
        else if(p-a[mid]==0) return mid;
        if(abs(p-a[mid])<Min)
        {
            num=mid;
            Min=abs(p-a[mid]);
        }
        else if(abs(p-a[mid])==Min&&mid<num)    num=mid;
        if(l==r)    return num;
    }
}
