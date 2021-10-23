#include<cstdio>
using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    double e=1,n;
    for(int i1=1;i1<=a;i1++)
    {
        n=1;
        for(int i2=1;i2<=i1;i2++)
        {
            n=n*i2;
        }
        e=e+(1/n);
    }
    printf("%.10lf",e);
    return 0;
}
