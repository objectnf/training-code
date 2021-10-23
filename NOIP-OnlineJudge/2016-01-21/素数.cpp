#include<stdio.h>
bool IsPrime(int x);
int main()
{
    int a;
    scanf("%d",&a);
    bool b=IsPrime(a);
    if(b==true) printf("It is a prime.");
    else printf("It isn't a prime.");
    return 0;
}
bool IsPrime(int x)
{
    if(x<=1)    return false;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)  return false;
    }
    return true;
}
