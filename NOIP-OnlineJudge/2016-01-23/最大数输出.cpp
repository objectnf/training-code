#include<stdio.h>
int a[3];
int main()
{
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    int maxim=a[0];
    for(int i=0;i<3;i++)
    {
        if(a[i]>=maxim)
        {
            maxim=a[i];
        }
        else continue;
    }
    printf("%d",maxim);
    return 0;
}
