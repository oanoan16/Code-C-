#include <stdio.h>

int main()
{
	int m,n,a[100][100];
	int b[100][100]={0},maxR=0,minC=1e9,keyR,keyC,c;
	scanf("%d", &n);
	
	for (int i=0; i<n;i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
			b[0][j]+=a[i][j];
		}	
	}
	
	for (int j=0; j<n; j++)
		if(b[0][j]<minC)
		{
			minC=b[0][j];
			keyC=j;
		}
	
	printf("%d\n", keyC+1);
	for (int j=0; j<n; j++)
		printf("%d ", a[j][keyC]);
	return 0;
}


