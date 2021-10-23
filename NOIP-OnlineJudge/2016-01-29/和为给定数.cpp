#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[100000];
bool Check(int z,int zstart,int zend);
int main()
{
    int n,m,mark=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",&a[i]);
    sort(a,a+n,less<int>());
    scanf("%d",&m);
    for(int i=0;i<n&&m>=a[i];i++)
    {
        if(Check(m-a[i],i+1,n))
           {
                mark=1;
                printf("%d %d\n",a[i],m-a[i]);
                break;
           }
    }
    if(mark!=1) printf("No");
    return 0;
}
bool Check(int z,int zstart,int zend)
{
    int l=zstart,r=zend-1,mid;
    if(a[l]==z) return true;
    while(l<=r)   //注意为小于等于，l=r时a[mid]才等于z
    {
        mid=l+(r-l)/2;
        if(a[mid]==z)   return true;
        else if(z<a[mid])   r=mid-1;
        else l=mid+1;
    }
    return false;
}
