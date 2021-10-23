#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[256];
	int a=0;
	gets(s);
	for (int i = 0; s[i] != '\0' ; i++)
	{
	    int b=s[i];
		if (b >= 48 && b <= 57)	a++;
	}
	printf("%d",a);
	return 0;
}
