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
    int n, ans;
    cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    } 
    sort(a.begin(), a.end());
    ans=max({a[n-1]*a[n-2]*a[n-3], a[0]*a[1], a[0]*a[1]*a[n-1]});
    cout << ans;
    cout << endl;
}

int main(){
    faster();
    int t=1;
 //   cin >> t;
    while (t--) solve();
    return 0;
}