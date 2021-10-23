#include<cstdio>
using namespace std;
int main()
{
	freopen("dxx2.in","r",stdin);
	freopen("dxx2.out","w",stdout);
	char s[101];
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97&&s[i]<=122)	s[i]-=32;
	}
	printf("%s",s);
	return 0;
}
