#include<stdio.h>
int main()
{
    int a,sum=0;
    int Max=0,Min=99999999;
    scanf("%d",&a);
    for(int x=0;x<=16384;x++)
        for(int y=0;y<=8192;y++)
    {
        if(2*x+4*y==a)
        {
            if(x+y>=Max) Max=x+y;
            if(x+y<=Min) Min=x+y;
            sum++;
        }
        else continue;
    }
    if(sum==0)
    {
        printf("0 0");
    }
    else printf("%d %d",Min,Max);
    return 0;
}
