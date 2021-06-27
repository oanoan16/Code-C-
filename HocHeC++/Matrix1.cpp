#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, m, row=0, col=0, c, p, tm, tn;
    cin >> n >> m;
    int a[n+1][m+1];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cin >> a[i][j];
    }
    tm=m; 
    tn=n;
    while (row<n && col<m){
        if (row==n-1 || col==m-1) break;
        p=a[row+1][col];
        for (int i=col; i<m; i++){
            c=a[row][i];
            a[row][i]=p;
            p=c;
        }
        row++;
        for (int i=row; i<n; i++){
            c=a[i][m-1];
            a[i][m-1]=p;
            p=c;
        }
        m--;
        if (row<n){
            for (int i=m-1; i>=col; i--){
                c=a[n-1][i];
                a[n-1][i]=p;
                p=c;
            }
        }
        n--;
        if (col<m){
            for (int i=n-1; i>=row; i--){
                c=a[i][col];
                a[i][col]=p;
                p=c;
            }
        }
        col++;
    }
    for (int i=0; i<tn; i++){
        for (int j=0; j<tm; j++){
            cout << a[i][j] << " ";
        }
    }
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




