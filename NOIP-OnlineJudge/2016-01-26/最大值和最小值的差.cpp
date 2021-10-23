#include<stdio.h>
int Max=0,Min=99999999;
int main()
{
    int n,a[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
        if(a[n]>=Max)   Max=a[n];
        if(a[n]<=Min)   Min=a[n];
    }
    int c=Max-Min;
    printf("%d",c);
    return 0;
}
