#include<stdio.h>
int cube[100][100],n,ttl,numh,numl,sumh,suml;
int main()
{
    freopen("04.in","r",stdin);
    freopen("04.out","w",stdout);
    scanf("%d",&n);
    for(int i1=1;i1<=n;i1++)
        for(int i2=1;i2<=n;i2++)
    {
        scanf("%d",&cube[i1][i2]);
    }
    for(int i1=1;i1<=n;i1++)
    {
        for(int i2=1;i2<=n;i2++)
        {
            if(cube[i1][i2]==1)     ttl++;
        }
        if(ttl%2==1)
        {
            numh=i1;
            sumh++;
        }
        ttl=0;
    }
    for(int i2=1;i2<=n;i2++)
    {
        for(int i1=1;i1<=n;i1++)
        {
            if(cube[i1][i2]==1)     ttl++;
        }
        if(ttl%2==1)
        {
            numl=i2;
            suml++;
        }
        ttl=0;
    }

    if(sumh==1&&suml==1)
    {
        printf("%d %d",numh,numl);
    }
    else if(sumh==0&&suml==0)
    {
        printf("OK");
    }
    else
    {
        printf("Corrupt");
    }
    return 0;
}
