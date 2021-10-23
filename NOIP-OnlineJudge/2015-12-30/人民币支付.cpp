#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[6]={0},c[6]={100,50,20,10,5,1};  //b[6]={0} 将b数组中所有元素均初始化为0. 
	for(int i=0;i<6;i++)
	{
		if(a/c[i]>0)
		{
			b[i]=a/c[i];
			a=a-c[i]*b[i];
		}
		printf("%d\n",b[i]);
	}
	return 0;
}
