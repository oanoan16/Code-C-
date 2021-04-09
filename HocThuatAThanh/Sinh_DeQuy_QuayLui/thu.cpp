#include <bits/stdc++.h>

int main()
{
	int i,n,k=0,a[100][100];
	scanf("%d",&n);
	i=n;
	while(i >0)
	{
		k++;
		for (int j=k; j<=n; j++)
		{
			a[k][j]=i;
			a[j][k]=i;
		}
		i--;
	}
	for (int j=1; j<=n; j++)
	{
		for(int h=1; h<=n; h++)
			printf("%d ",a[j][h]);
		printf("\n");
	}
	return 0;
}

