#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    int n, ans=1e9, c;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i=1; i<n; i++){
        c=abs(a[i]-a[i-1]);
        ans=min(c, ans);
    }
    cout << ans;
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


