#include<stdio.h>
#include<string.h>
int main()
{
    char s[]={'H','e','l','l','o',',',' ','W','o','r','l','d','!','\0'};
    int a=sizeof(s);
    printf("%d",a);
    return 0;
}
