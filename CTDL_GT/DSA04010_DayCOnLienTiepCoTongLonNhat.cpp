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
    ll Max=-100000000, Maxs=0, s=0;
    cin >> n;
    for (int i=0; i<n; i++){
        ll v;
        cin >> v;
        Max=max(v, Max);
        s+=v;
        if (s<0) s=0;
        Maxs=max(s, Maxs);
    }
    if (Max<0) cout << Max;
    else cout << Maxs;
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