#include<stdio.h>
int main()
{
    int sum;
    int a[9];
    for(a[0]=1;a[0]<=9;a[0]++)
        for(a[1]=1;a[1]<=9;a[1]++)
            for(a[2]=1;a[2]<=9;a[2]++)
                for(a[3]=1;a[3]<=9;a[3]++)
                    for(a[4]=1;a[4]<=9;a[4]++)
                        for(a[5]=1;a[5]<=9;a[5]++)
                            for(a[6]=1;a[6]<=9;a[6]++)
                                for(a[7]=1;a[7]<=9;a[7]++)
                                    for(a[8]=1;a[8]<=9;a[8]++)
                                        {
                                            sum=0;
                                            int book[9]={0};
                                            for(int i=0;i<9;i++)
                                            {
                                                book[a[i]-1]=1;
                                            }
                                            for(int p=0;p<9;p++)
                                            {
                                                sum=sum+book[p];
                                            }
                                            if(sum==9&&a[0]*100+a[1]*10+a[2]+a[3]*100+a[4]*10+a[5]==a[6]*100+a[7]*10+a[8]
                                                    &&(a[0]*100+a[1]*10+a[2])<(a[3]*100+a[4]*10+a[5]))
                                            {
                                                printf("%d%d%d+%d%d%d=%d%d%d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
                                            }
                                            else continue;
                                        }
     return 0;
}
