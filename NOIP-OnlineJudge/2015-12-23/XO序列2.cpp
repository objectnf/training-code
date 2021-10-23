#include<stdio.h>
#include<string.h> 
int main()
{
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		char a[81];
    	scanf("%s",a); 
    	int b=strlen(a);
    	int c=0,d=0;
    	for(int i=0;i<b;i++)
    	{
			if(a[i]=='X')
			{
				c=c+0;
				d=0;
			}
			else if(a[i]=='O')
			{
				d++;
				c=c+d;
			}
		}
		printf("%d\n",c);
	}
    return 0;
}
