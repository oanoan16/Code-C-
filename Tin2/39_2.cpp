#include <stdio.h>

int main(){
	int n, i = 0, start, end, m[100][100], c;
	scanf("%d", &n);
	c = n*n + 1;
	start = 0;
	end = n - 1;
	while (start <= end){
		for (int j = start; j <= end; ++j)
			m[start][j] = --c;
		for (int j = start + 1; j <= end; ++j)
			m[j][end] = --c;
		for (int j = end - 1; j >= start; --j)
			m[end][j] = --c;
		for (int j = end-1; j >= start + 1; --j)
			m[j][start] = --c;
		++start;
		--end;
	}
	for (int j = 0; j < n; ++j){
		for (int k = 0; k < n; ++k)
			printf("%d ", m[j][k]);
		printf("\n");
	}
	return 0;
}


