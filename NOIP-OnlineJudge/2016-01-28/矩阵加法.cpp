#include<stdio.h>
int c1[100][100],c2[100][100],c3[100][100];
int main()
{
	freopen("08.in","r",stdin);
	freopen("08.out","w",stdout); 
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i1=1;i1<=m;i1++)
        for(int i2=1;i2<=n;i2++)
            scanf("%d",&c1[i1][i2]);
    for(int i1=1;i1<=m;i1++)
        for(int i2=1;i2<=n;i2++)
            scanf("%d",&c2[i1][i2]);
    for(int i1=1;i1<=m;i1++)
    	{
    		for(int i2=1;i2<=n;i2++)
			{
				c3[i1][i2]=c1[i1][i2]+c2[i1][i2];
				printf("%d ",c3[i1][i2]);
			}
			printf("\n");
		}
	return 0;
}
