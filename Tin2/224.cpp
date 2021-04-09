#include <stdio.h>
#include <math.h>

int main()
{
	int  n;	
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		int a=n;
		int b=i;
		for (int j=1; j<=i; j++){
			if (j==1) printf("%d ", b);
			else {
				b+=--a;
				printf("%d ", b);
			}
		}
		printf("\n");
	}
	return 0;
}


