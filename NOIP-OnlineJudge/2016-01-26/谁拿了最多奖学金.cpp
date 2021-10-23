#include<stdio.h>
struct student
{
    char name[21];
    int qm,bj;
    char gb,xb;
    int lw;
}stu[101];
int total,Max,num,sum;
int main()
{
    freopen("jxj.in","r",stdin);
    freopen("jxj.out","w",stdout);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].qm,&stu[i].bj,&stu[i].gb,&stu[i].xb,&stu[i].lw);  //注意：%c前空格的原因：空格会当成字符输入.
        }
    for(int i=0;i<n;i++)
    {
        if(stu[i].qm>80&&stu[i].lw>0)    total=total+8000;
        if(stu[i].qm>85&&stu[i].bj>80)   total=total+4000;
        if(stu[i].qm>90)                 total=total+2000;
        if(stu[i].qm>85&&stu[i].xb=='Y') total=total+1000;
        if(stu[i].bj>80&&stu[i].gb=='Y') total=total+850;
        sum=sum+total;
        if(total>Max)
        {
            Max=total;
            num=i;
        }
        total=0;
    }
    printf("%s\n%d\n%d",stu[num].name,Max,sum);
    return 0;
}
