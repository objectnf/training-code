#include<stdio.h>
int main()
{
    int n,result=-1,num,a[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            result=i+1;
            break;
        }
    }
    printf("%d",result);
    return 0;
}
