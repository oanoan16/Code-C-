#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n;
    cin >> n;
    ll a[n+1], f[n+1]={0};
    for (int i=0; i<n; i++) cin >> a[i];
    f[1]=a[0];
    for (int i=2; i<n+1; i++){
        f[i]=max(f[i-1], f[i-2]+a[i-1]);
    }
    cout << f[n] << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}