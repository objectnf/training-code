#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int xmin=(c-1000*b)/a;
    if(xmin<0)  xmin=0;
    int sum=0;
    for(int x=xmin;x<=c/a;x++)
    {
            if((c-a*x)%b==0)
        {
            sum++;
        }
        else    continue;
    }
    printf("%d",sum);
    return 0;
}
