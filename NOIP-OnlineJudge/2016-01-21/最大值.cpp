#include<stdio.h>
int IsMax(int x,int y);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=IsMax(a,b);
    printf("%d",c);
    return 0;
}
int IsMax(int x,int y)
{
    if(x>y) return x;
    else return y;
}
