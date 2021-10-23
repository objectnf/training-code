#include<stdio.h>
int main()
{
	int a[10];
	for(int b=0;b<10;b++)
	{
		scanf("%d",&a[b]);
	}
	float c[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	float d[10];
	for(int e=0;e<10;e++)
	{
		d[e]=a[e]*c[e];
	}
	float f=0;
	for(int g=0;g<10;g++)
	{
		f=f+d[g];
	}
	printf("%.1f",f);
	return 0;
}
