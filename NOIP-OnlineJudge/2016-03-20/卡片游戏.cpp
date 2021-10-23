#include<cstdio>
#include<queue>
using namespace std;
int main()
{
	int n,Temp;
	while(scanf("%d",&n)&&n!=0&&n!=1)
	{
		queue <int> q;
		for(int i=1;i<=n;i++)
		{
			q.push(i);
		}
		while(q.size()>=2)
		{
			printf("%d ",q.front());
			q.pop();
			int a=q.front();
			q.pop();
			q.push(a);
		}
		printf("\n%d\n\n",q.front());
	}
	return 0;
}
