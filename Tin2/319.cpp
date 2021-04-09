#include <stdio.h>

void swap( int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a[100000], n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j]) swap(&a[i], &a[j]);
	}
	int i=1;
	while (a[i]==a[i-1] && i<n){
		i++;
	}
	printf("%d %d", a[0], a[i]);
}
