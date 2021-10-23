#include<stdio.h>
int c[100][100],sum;
int main()
{
    freopen("03.in","r",stdin);
    freopen("03.out","w",stdout);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i1=1;i1<=a;i1++)
        for(int i2=1;i2<=b;i2++)
    {
        scanf("%d",&c[i1][i2]);
        if(i1==1)   sum=sum+c[i1][i2];
        else if(i2==1)  sum=sum+c[i1][i2];
        else if(i1==a)  sum=sum+c[i1][i2];
        else if(i2==b)  sum=sum+c[i1][i2];
    }
    printf("%d",sum);
    return 0;
}
