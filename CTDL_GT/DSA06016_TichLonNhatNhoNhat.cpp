#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 1000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, m;
    ll Min=1e9, Max=-1e9, v;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> v;
        Max=max(v, Max);
    }
    for (int i=0; i<m; i++){
        cin >> v;
        Min=min(v, Min);
    }
    cout << Min*Max <<  endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


