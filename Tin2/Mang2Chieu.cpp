#include <stdio.h>

// int a[100][100], n, m, b[100][100];


/*
void nguoc90(){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++)
			b[i][j]=a[j][m-i-1];
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++)
			printf("%d ", b[i][j]);	
		printf("\n");
	}
}

void xuoi90(){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++)
			b[i][j]=a[m-j-2][i];
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++)
			printf("%d ", b[i][j]);	
		printf("\n");
	}
}

void xoay180(){
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++)
			b[i][j]=a[n-i-1][m-j-1];
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++)
			printf("%d ", b[i][j]);	
		printf("\n");
	}
}

int main()
{
	scanf("%d%d", &n, &m);
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			scanf("%d", &a[i][j]);	
	printf("\n");
	nguoc90(); printf("\n");
	xuoi90();  printf("\n");
	xoay180();
}
*/

int main()
{
	int a[2][2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,23,24,25,26};
	printf("%d %d", a[0][1][2][2],a[1][0][1][2]);
}

