#include<cstdio>
using namespace std;
int main()
{
	freopen("jdmm.in","r",stdin);
	freopen("jdmm.out","w",stdout);
	char s[201];
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=69)	s[i]=s[i]+21;
		else if(s[i]>=70&&s[i]<=90)	s[i]=s[i]-5;
	}
	printf("%s",s);
	return 0;
}
