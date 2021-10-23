#include<stdio.h>
int main()
{
	int a[10];
	for(int b=0;b<10;b++)
	{
		scanf("%d",&a[b]);
	}
	int c,e=0;
	scanf("%d",&c);
	for(int d=0;d<10;d++)
	{
		if(a[d]<=c+30)
			e++;
	}
	printf("%d",e);
	return 0;
}
