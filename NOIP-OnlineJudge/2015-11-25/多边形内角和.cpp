#include<stdio.h>
int main()
{
	int a,b,c[50],d=0;
	for(a=0; ;a++)
	{
		scanf("%d",&b);
		if(b==0)  break;
		int a[b];
		int s=0,s2=0;
		for(int i=0;i<=b-2;i++)
		{
			scanf("%d",&a[i]);
			s=s+a[i];
		}
		s2=b*180-2*180;
		c[d]=s2-s;
		d++;
	}
	for(int e=0;e<d;e++)
	{
		printf("%d\n",c[e]);
	}
	return 0;
}
