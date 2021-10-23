#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	if(k==1)
	{
		printf("1");
	}else if(k>1)
	{
		int a[k];
		a[0]=1;
		a[1]=1;
		for(int i=2;i<k;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		printf("%d",a[k-1]);
	}
	return 0;
}

