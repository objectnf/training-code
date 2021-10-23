#include<stdio.h>
int Fib(int a);
int a[21],b[21];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        b[i]=Fib(a[i]);
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",b[i]);
    return 0;
}
int Fib(int a)
{
    if(a==1||a==2)  return 1;
    else
    {
        int result=Fib(a-1)+Fib(a-2);
        return result;
    }
}
