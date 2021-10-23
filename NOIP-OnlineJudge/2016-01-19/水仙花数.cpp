#include<stdio.h>
int main()
{
	for(int i1=1;i1<10;i1++)
		for(int i2=0;i2<10;i2++)
			for(int i3=0;i3<10;i3++)
			{
				int sum=i1*i1*i1+i2*i2*i2+i3*i3*i3;
				int num=i1*100+i2*10+i3;
				if(sum==num)
				{
					printf("%d\n",num);
				}
				else continue;
			}
	return 0;
}
