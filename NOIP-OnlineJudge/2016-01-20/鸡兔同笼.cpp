#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    for(int x=0;x<=16384;x++)
        for(int y=0;y<=8192;y++)
    {
        if(2*x+4*y==a)
        {
            printf("%d %d\n",x,y);
            sum++;
        }
        else continue;
    }
    if(sum==0)
    {
        printf("0 0");
    }
    return 0;
}
