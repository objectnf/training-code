#include<iostream>
using namespace std;
int BS(int a[],int sizea,int q);  //注意数组做形参
int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<BS(a,10,8);
    return 0;
}
int BS(int a[],int sizea,int q)
{
    int L=0;
    int R=sizea-1;
    while(L<=R)
    {
        int mid=L+(R-L)/2;
        if(q==a[mid])   return a[mid];
        else if(q>a[mid])   L=mid+1;
        else R=mid-1;
    }
    return -1;
}
