#include<cstdio>
using namespace std;
int main()
{
	freopen("mmfy.in","r",stdin);
	freopen("mmfy.out","w",stdout);
	char s[81];
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='y'||s[i]>='A'&&s[i]<='Y')	s[i]+=1;
		else if(s[i]=='z')	s[i]='a';
		else if(s[i]=='Z')	s[i]='A';
		else continue;
	}
	printf("%s",s);
	return 0;
}
