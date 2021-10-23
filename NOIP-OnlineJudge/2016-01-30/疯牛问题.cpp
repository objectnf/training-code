#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,c,pos[100000];
int BS();
int judge(int k);
int main()
{
    while(~scanf("%d%d",&n,&c))     //~为“取反”之意，输入数据非法则重新输入
    {
        for(int i=0;i<n;i++)
            scanf("%d",&pos[i]);
        sort(pos,pos+n,less<int>());
        printf("%d\n",BS());
    }
}
int BS()    //满足条件最大距离
{
    int left=0;
    int right=pos[n-1]-pos[0];
    int mid=(left+right)>>1;
    //>>1将二进制位向右移动一位，相当于除二；同理，左移一位相当于乘二
    while(left<=right)
    {
        if(judge(mid))     //本处即“贪心法”，看距离是否还能更大
            left=mid+1;
        else
            right=mid-1;
        mid=(left+right)>>1;    //更新mid值
    }
    return left-1;
    //left需要-1，输出的是mid值（left=mid+1;left-1=mid)
}
int judge(int k)
{
    int cnt=1,start=pos[0];
    for(int i=1;i<n;i++)
    //判断下一头牛是否还能放在超过最小距离的位置
    //第一头牛已经放在第一个位置处，所以i从1开始
    {
        if(pos[i]-start>=k)
        {
            cnt++;
            if(cnt>=c)
            //判断已经安放的牛的数量是否已经达到数据中所给的牛的数量
                return true;
            start=pos[i];       //更新start值
        }
    }
    return false;
}
