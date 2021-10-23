#include<stdio.h>
int a[10000][4];
int b[2];
int sum=0;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i1=0;i1<n;i1++)
        for(int i2=0;i2<4;i2++)
    {
        scanf("%d",&a[i1][i2]);
    }
    scanf("%d%d",&b[0],&b[1]);
    for(int i=0;i<n;i++)
    {
        int g=a[i][0]+a[i][2];
        int k=a[i][1]+a[i][3];
        if(b[0]>=a[i][0]&&b[0]<=g&&b[1]>=a[i][1]&&b[1]<=k)    sum=i+1;
        else continue;
    }
    if(sum==0)  sum=-1;
    printf("%d",sum);
    return 0;
}
