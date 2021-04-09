#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, m, a[105][105], w[105], v[105];
 
void input(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];
}
 
void solve(){
	for (int i = 0; i <= n; i++){
		for (int j = 0; j <= m; j++){
			if (i == 0 || j == 0)
				a[i][j] = 0;
			else if (w[i] <= j)
				a[i][j] = max(v[i] + a[i-1][j-w[i]], a[i-1][j]);
			else 
				a[i][j] = a[i-1][j];
		}
	}
	cout << a[n][m] << endl;	
}
 
int main(){
	faster();
	input();
	solve();	
	return 0;
}
 
