#include <stdio.h>
#include <math.h>
bool prime(int x)
{
	if (x<2)
		return false ;
	for (int i=2; i<=sqrt(x); i++)
		if (x%i==0)
			return false;
	return true;
}

int main()
{
	int n, a[100][100],c=0;
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			scanf("%d", &a[i][j]);
			if ((i==j || i+j==n+1) && prime(a[i][j]))	
				c+=a[i][j];
		}
	}
	printf("%d", c);
	return 0;
}


