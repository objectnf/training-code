#include <stdio.h>
int main()
{

	int a;
	int i,len;
	char str[1000];
	scanf("%d",&a);
	i=0;
	while(a)
	{
		str[i++]=a%8+'0';
		a/=8;
	}
	len=i-1;
	for(i=len;i>=0;i--)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}

