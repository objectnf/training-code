#include<cstdio>
#include<algorithm>
using namespace std;
struct student
{
	long num;
	float gde;
}s[100];
bool comp(student a,student b)
{
	return a.gde<b.gde;
}
int main()
{
	freopen("km.in","r",stdin);
	freopen("km.out","w",stdout);
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)	scanf("%d%f",&s[i].num,&s[i].gde);
	sort(s,s+n,comp);
	printf("%d %g",s[n-k].num,s[n-k].gde);
	return 0;
}
