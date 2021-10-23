#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a];
	for(int c=0;c<a;c++)
	{
		scanf("%d",&b[c]);
	}
	for(int d=a-1;d>=0;d--)
	{
		printf("%d ",b[d]);
	}
	return 0;
}
