#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	for(int d=0;d<n;d++)
	{
		scanf("%d",&b[d]);
	}
	int sum=0;
	for(int e=0;e<n;e++)
	{
		int temp=a[e]*b[e];
		sum=sum+temp;
	}
	printf("%d",sum);
	return 0;
}
