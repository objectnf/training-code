#include<stdio.h>
int main()
{
    long a;
    scanf("%ld",&a);
    if(a%3==0 && a%5==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
