#include<stdio.h>
int main()
{
    freopen("01.in","r",stdin);
    freopen("01.out","w",stdout);
    int a[5][5];
    for(int i=0;i<5;i++)
        for(int i2=0;i2<5;i2++)
            scanf("%d",&a[i][i2]);
    int b,c;
    scanf("%d%d",&b,&c);
    int d[5];
    for(int i=0;i<5;i++)
    {
        d[i]=a[b-1][i];
        a[b-1][i]=a[c-1][i];
    }
    for(int i=0;i<5;i++)
    {
        a[c-1][i]=d[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int i2=0;i2<5;i2++)
            {
                printf("%d ",a[i][i2]);
            }
        printf("\n");
    }
    return 0;
}
