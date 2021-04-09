#include <stdio.h>
#include <math.h>

void swap(int*a, int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	
	long long n;
	int a[100], i=0;
	scanf("%d", &n);
	while (n>0){
		a[++i]=n%10;
		n/=10;
	}
	swap(&a[1], &a[i]);
	for (int j=i; j>=1; j--) {
		if (j==i && a[j]!=0) printf("%d",a[j]);
		else if (j<i) printf("%d",a[j]);
	}
	return 0;
}


