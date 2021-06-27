#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, m;
    cin >> n >> m;
    int a[n+1][m+1];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cin >> a[i][j];
    }
    int start=0, c=0, row=n-1, col=m-1;
    while (c<n*m){
        for (int i=start; i<=col; i++){
            c++;
            cout << a[start][i] <<" ";
        }
        for (int i=start+1; i<=row; i++) {
            c++;
            cout << a[i][col] <<" ";
        }
        for (int i=col-1; i>=start && c<m*n; i--) {
            c++;
            cout << a[row][i] <<" ";
        }
        for (int i=row-1; i>start && c<m*n; i--) {
            c++;
            cout << a[i][start] <<" ";
        }
        row--;
        col--;
        start++;
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




