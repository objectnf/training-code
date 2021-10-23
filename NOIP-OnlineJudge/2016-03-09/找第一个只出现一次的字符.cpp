#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("1.7.02.in","r",stdin);
    freopen("1.7.02.out","w",stdout);
    int num=0;
    char s[100001],q='0';
    cin>>s;
    for(int i1=0;s[i1]!='\0';i1++)
    {
        for(int i2=0;s[i2]!='\0';i2++)
        {
            if(s[i1]==s[i2])
                num++;
        }
        if(num==1)
        {
            q=s[i1];
            break;
        }
        else
        {
            num=0;
            continue;
        }
    }
    if(q=='0')   cout<<"no";
    else    cout<<q;
    return 0;
}
