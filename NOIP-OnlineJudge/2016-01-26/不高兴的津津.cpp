#include<stdio.h>
int a[7][2],b[7],sum,maxtime,num;
int main()
{
    for(int i1=0;i1<7;i1++)
        for(int i2=0;i2<2;i2++)
            scanf("%d",&a[i1][i2]);
    for(int i=1;i<7;i++)
    {
        b[i]=a[i][0]+a[i][1];
        if(b[i]>8)  sum++;
        if(b[i]>maxtime)
        {
            maxtime=b[i];
            num=i+1;
        }
    }
    if(sum==0)   printf("0");
    else
    {
        printf("%d",num);
    }
    return 0;
}
