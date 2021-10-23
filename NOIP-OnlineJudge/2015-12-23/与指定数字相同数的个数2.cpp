#include<stdio.h>
int main()
{
	int a,d=0;
	scanf("%d",&a);
	int b[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	int c;
	scanf("%d",&c);
	for(int e=0;e<a;e++)
	{
		if(b[e]==c)
		{
			d++;
		}
	}
	printf("%d",d);
	return 0;
 }
