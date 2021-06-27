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
    int n, m, k;
    cin >> n >> m >> k;
    vector <int> a(n), b(m), c(k), ans;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    for (int i=0; i<k; i++) cin >> c[i];
    int i=0, j=0, l=0;
    while (i<n && j<m && l<k){
        int Max=max(a[i], max(b[j], c[l]));
        if (a[i]==b[j] && b[j]==c[l]){
            ans.pb(a[i]);
            i++; j++; l++;
            continue;
        }
        if (a[i]<Max) i++;
        if (b[j]<Max) j++;
        if (c[l]<Max) l++;
    }
    
    if (ans.size()==0) cout << "NO";
    else {
        for (auto x:ans) cout << x << " ";
    }
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}