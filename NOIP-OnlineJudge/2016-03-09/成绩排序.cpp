#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct student
{
    string name;  //string 定义字符串 不用指明元素个数
    float mark;
}cls[50];
bool comp(student a,student b)  //手动编写comp函数，注意传出的值一定是0或1
{
    if(a.mark==b.mark)  return a.name<b.name;
    else return a.mark>b.mark;
}
int main()
{
    freopen("03.in","r",stdin);
    freopen("03.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>cls[i].name>>cls[i].mark;
    }
    sort(cls,cls+n,comp);  //结构体作为单个元素进行排序，名字和成绩之间仍然对应
    for(int i=0;i<n;i++)
    {
        cout<<cls[i].name<<" "<<cls[i].mark<<endl;
    }
    return 0;
}
