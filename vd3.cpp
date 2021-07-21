#include <stdio.h>

void swap(long int* a, long int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve(){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    long int b[n*m];
    int c=-1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
        	long int val;
            scanf("%ld", &val);
            b[++c]=val;
        }
    }
    
    for (int i=0; i<=c; i++){
        for (int j=0; j<=c-i-1; j++){
            if (b[j]>b[j+1]){
                swap(&b[j], &b[j+1]);
            }
        }
    }
    
    printf("%ld", b[c-k]);
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        solve();
    }
}
