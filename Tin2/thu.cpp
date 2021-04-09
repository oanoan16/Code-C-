#include<stdio.h>

int main(){
	long long n;	
	scanf("%lld", &n);
	int i = 2;	
	while(n > 1){
		while (n % i == 0){
			printf("%d ", i);
			n /= i;
		}
		i++;
	}
	return 0;
}

