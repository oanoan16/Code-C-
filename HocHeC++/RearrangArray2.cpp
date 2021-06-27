#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, c=-1;
	cin >> n;
    ll b, a[n];
	for (int i=0; i<n; i++){
        cin >> b;
        if (b>0) a[++c]=b;
    }
	for (int i=0; i<=c; i++) cout << a[i] << " ";
	for (int i=c; i<n-1; i++) cout << 0 << " ";

    cout <<  endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}