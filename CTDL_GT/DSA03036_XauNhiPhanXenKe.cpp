#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define INF INT_MAX
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;

void solve(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        if (i&1) cout << 0 << " ";
        else cout << 1 << " ";
    }
    cout << endl;
    for (int i=0; i<n; i++){
        if (i&1) cout << 0 << " ";
        else cout << 1 << " ";
    }
    cout << endl;
}

int main(){
    faster();
    int t=1;
 //   cin >> t;
    while (t--) solve();
    return 0;
}