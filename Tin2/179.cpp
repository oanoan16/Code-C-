#include <stdio.h>
#include <math.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	if (n<m){
		for (int i=1; i<=n; i++){
		for (int j=m; j>=1; j--)
			if (j>(n+i-1)) printf("%d",j);
			else printf("%d",n+i-1);
		printf("\n");
		}
	}
	else{
		for (int i=1; i<=n; i++){
			for (int j=n; j>=(n-m+1); j--)
				if (j>i) printf("%d",j);
					else printf("%d",i);
		printf("\n");
		}
	}
	
	return 0;
}


