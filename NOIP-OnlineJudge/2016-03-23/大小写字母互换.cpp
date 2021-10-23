#include<cstdio>
using namespace std;
int main()
{
	freopen("dxx.in","r",stdin);
	freopen("dxx.out","w",stdout);
	char s[81];
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97&&s[i]<=122)	s[i]=s[i]-32;
		else if(s[i]>=65&&s[i]<=90)	s[i]=s[i]+32;
	}
	printf("%s",s);
	return 0;
}
