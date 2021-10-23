#include<stdio.h>
int main()
{
    freopen("02.in","r",stdin);
    freopen("02.out","w",stdout);
    int n,i,j;
    scanf("%d%d%d",&n,&i,&j);
    for(int p=1;p<=n;p++)
    {
        printf("(%d,%d) ",i,p);
    }
    printf("\n");
    for(int p=1;p<=n;p++)
    {
        printf("(%d,%d) ",p,j);
    }
    printf("\n");
    for(int p=1;p<=n;p++)
        for(int q=1;q<=n;q++)
        {
            if(q-p==j-i)
                printf("(%d,%d) ",p,q);
        }
    printf("\n");
    for(int p=n;p>=1;p--)
        for(int q=n;q>=1;q--)
        {
            if(p+q==i+j)
                printf("(%d,%d) ",p,q);
        }
    return 0;
}
