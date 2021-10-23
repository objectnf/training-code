#include<stdio.h>
//#include<time.h>
int main()
{
	int a[22],c[11],d,y=1;
	for(int i=10;i<32;i++)
	{
		a[i-10]=i*i;
		int g=a[i-10]%10;
		int s=(a[i-10]/10)%10;
		int b=a[i-10]/100;
		if(g==s||s==b||b==g)
		{
			c[y]=a[i-10];
			y++;
		}
	}
	scanf("%d",&d);
	printf("%d",c[d]);
	//printf("Time:%.2f\n",(double)clock()/CLOCKS_PER_SEC);
	return 0;
}
