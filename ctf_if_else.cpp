#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	long long a, b, c, d, f, tmp, check=1;
	scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &f);
	if ((a == 9 || a == 105102 || a == 1019 || a == 5 || a == 5101108115) 
		&& (b == 9 ||b == 105102 ||b == 1019 ||b == 5 ||b == 5101108115) 
		&& (c == 9 ||c == 105102 ||c == 1019 ||c == 5 ||c == 5101108115)
		&& (d == 9 ||d == 105102 ||d == 1019 ||d == 5 ||d == 5101108115)
		&& (f == 9 ||f == 105102 ||f == 1019 ||f == 5 ||f == 5101108115)){
		tmp = (d < c) ? (c < b ? b : c) : (d < b ? b : d); 
		if (tmp < f){
			printf("%lld", tmp);
			if (a < d){
				tmp = c < b ? c : b; 
				if (a < tmp){
					printf("%lld", tmp); 
					if (tmp > f)
						tmp = f;
					else {
						printf("%lld", f); 
						tmp = (b + c - tmp); 
						printf("%lld", tmp); 
						printf("%lld", (tmp + f + llabs(tmp - f))/2); 
						printf("%lld", (tmp + f - llabs(tmp - f))/2); 
					}
					tmp = a < tmp ? a : tmp;
					printf("%lld", tmp); 
				}
				printf("%lld", (tmp + d + llabs(tmp - d))/2); 
			}
			if (d*b - c*a + f*a != 25506481398) 
				check = 0;
		}
	}
	else 
		check = 0;
	if (check == 1) 
		printf("\nCongratulations!");
	else 
		printf("\nTry again!");
	return 0;
}


