#include<cstdio>
using namespace std;
int main()
{
	freopen("pdjjl.in","r",stdin);
	freopen("pdjjl.out","w",stdout);
	char s[256],u[256];
	scanf("%s",s);
	for(int i=0;;i++)
	{
		if(s[i]=='A')		u[i]='T';
		else if(s[i]=='T')	u[i]='A';
		else if(s[i]=='G')	u[i]='C';
		else if(s[i]=='C')	u[i]='G';
		else if(s[i]=='\0')
		{
			u[i]='\0';
			break;
		}
	}
	printf("%s",u);
	return 0;
}
