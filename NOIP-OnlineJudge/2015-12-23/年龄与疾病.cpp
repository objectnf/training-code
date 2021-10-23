#include<stdio.h>
int main()
{
	int a;
	float d1=0,d2=0,d3=0,d4=0;
	scanf("%d",&a);
	int b[a];
	for(int c=0;c<a;c++)
	{
		scanf("%d",&b[c]);
		if(b[c]<=18) d1++;
		else if(b[c]<=35) d2++;
		else if(b[c]<=60) d3++;
		else d4++;
	}
	float b1,b2,b3,b4;
	b1=(d1/(a*1.0))*100;
	b2=(d2/(a*1.0))*100;
	b3=(d3/(a*1.0))*100;
	b4=(d4/(a*1.0))*100;
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%",b1,b2,b3,b4);
	return 0;
}
