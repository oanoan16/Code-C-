#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, s, a[35], res=35;

void Try(int x, int sum, int d){
    if (sum>s || d>res ) return;
    if (x==n+1){
        if (sum==s) res=min(res, d);
        return;
    }
    Try(x+1, sum, d);
    Try(x+1, sum+a[x], d+1);
}

void solve(){
    cin >> n >> s;
    for (int i=1; i<=n; i++) cin >> a[i];
    res=35;
    Try(0, 0, 0);
    if (res!=35) cout << res;
    else cout << -1;
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}