#include<stdio.h>
int a[100];
char s[100][21];
int num;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d%s",&a[i],s[i]);
    int Max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
            num=i;
        }
    }
    printf("%s",s[num]);
    return 0;
}
