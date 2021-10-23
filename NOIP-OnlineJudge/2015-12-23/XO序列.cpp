#include<stdio.h>
#include<string.h> 
int main()
{
    char a[81];  //必须比元素个数大1，因为字符串有结束符 /0 .
    scanf("%s",a);   //不要加上地址标号 & . 
    int b=strlen(a);  //可以直接使用 a.length() 代替变量 b . 
    int c=0,d=0;
    for(int i=0;i<b;i++)
    {
		if(a[i]=='X')   //变量等于单引号（表示作为一个字符） 中的字符的编码值 . 
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
	printf("%d",c);
	return 0;
}
