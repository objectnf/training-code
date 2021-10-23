#include<stdio.h>
int main()
{
	int m,n,i,p=0;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=m)
		{
			m=m-a[i];	
			p++;
		}
		else continue;
	}
	printf("%d",n-p);
	return 0;
}
