#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, m, c=0;
    cin >> n >> m;
    int a[n*m];
	for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cin >> a[c++];
    }
    sort(a, a+c);
	for (int i=0; i<c; i++) cout << a[i] << " ";
    cout <<  endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}