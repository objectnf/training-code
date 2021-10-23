#include<iostream>
using namespace std;
int Q[10000];
int main()
{
	int n;
	while(cin>>n&&n!=0&&n!=1)
	{
		for(int i=0;i<=n;i++)
		{
			Q[i]=i;
		}
	 	int head=1,tail=n,first=1;
	 	printf("Discard:");
	 	while(head<tail)
	 	{
	 		if(!first) 	printf(",");
	 		printf("%d",Q[head++]); 
			 /*相当于: 
			 printf("%d",Q[head]); 
			 head++;
			 */
			Q[++tail]=Q[head++]; 
			/*相当于:
			tail++; 
			Q[tail]=Q[head]; 
			head++;
			*/
			first=0;
		}
		printf("\nRemain:%d\n",Q[head]);
	} 
	return 0;
}
