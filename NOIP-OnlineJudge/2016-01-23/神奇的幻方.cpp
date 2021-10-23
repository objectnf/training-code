#include<stdio.h>
int hf[40][40];
int main()
{
    int n;
    scanf("%d",&n);
    int k=2*n-1;
    hf[1][k/2+1]=1;
    int h=1;
    int l=k/2+1;
    if(k==1)    printf("1");
    else
    {
        for(int i=2;i<=k*k;i++)
    {
        if(h==1&&l!=k)
        {
            h=k;
            l=l+1;
            hf[h][l]=i;
        }
        else if(h!=1&&l==k)
        {
            h=h-1;
            l=1;
            hf[h][l]=i;
        }
        else if(h==1&&l==k)
        {
            h=h+1;
            hf[h][l]=i;
        }
        else if(h!=1&&l!=k)
        {
            if(hf[h-1][l+1]==0)
            {
                hf[h-1][l+1]=i;
                h=h-1;
                l=l+1;
            }
            else
            {
                hf[h+1][l]=i;
                h=h+1;
            }
        }
    }
    for(int p=1;p<=k;p++)
    {
        for(int q=1;q<=k;q++)
            printf("%d ",hf[p][q]);
        printf("\n");
    }
    }
    return 0;
}
