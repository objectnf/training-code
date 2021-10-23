#include<cstdio>
using namespace std;
int main()
{
	freopen("zfth.in","r",stdin);
	freopen("zfth.out","w",stdout);
	char s[31],a,b;
	scanf("%s %c %c",s,&a,&b);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==a)	s[i]=b;
	}
	printf("%s",s);
	return 0;
}
