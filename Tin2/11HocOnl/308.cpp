#include <stdio.h>

int main(){
	int a[100000], b[100000], n, m , p, j;
	scanf("%d %d", &n, &m);
	
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);

	for (int j=0; j<m; j++)
		scanf("%d", &b[j]);
		
	scanf("%d",&p);
	
	for (int i=n+m-1; i>=p+m; i--)
	    a[i]=a[i-m];
	    
	j=0;
	for (int i=p; i<p+m; i++){
		a[i]=b[j];
		j++;
	}
	
	for (int i=0; i<m+n;i++)
		printf("%d ",a[i]);	
		
	return 0;
}

