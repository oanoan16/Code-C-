#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll a[N], f[N];
void solve(){
	int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    memset(f, 0, sizeof(f));
    f[0]=a[0]; 
    f[1]=max(a[0], a[1]);
    for (int i=2; i<n; i++){
        f[i]=max(f[i-1], f[i-2]+a[i]);
    }
    cout << f[n-1] << endl;
}

int main(){	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
