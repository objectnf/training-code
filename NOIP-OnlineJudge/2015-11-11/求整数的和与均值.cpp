#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int a[n];    //也可以不用数组：边读入边加 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int j=0;j<n;j++)
	{
		sum=sum+a[j];
	}
	printf("%d %.5lf",sum,(double)sum/n);
	return 0;
}
