#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	
	int r,c,sum=0;
	scanf("%d%d",&r,&c);
	int k,l,ar[r][c];
	for(k=0;k<r;k++)
	{
		for(l=0;l<c;l++)
		{
		scanf("%d",&ar[k][l]);
		}
	}
	for(k=0;k<r;k++)
	{
		for(l=0;l<c;l++)
		{
			printf("%d ",arr[k][l]+ar[k][l]);
	    }
      printf("
");
	}
}