#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
ll a[N];
void solve(){
	int n;
	cin >> n;
    ll b;
    memset(a, -1, sizeof(a));
	for (int i=0; i<n; i++){
        cin >> b;
        if (b>=0 && b<=n) a[b]=b;
    }
	for (int i=0; i<n; i++) cout << a[i] << " ";
    cout <<  endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}