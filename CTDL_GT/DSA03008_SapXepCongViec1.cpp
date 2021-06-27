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
    vector <ll> a(n), b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    vector <pii> vp;
    for (int i=0; i<n; i++) vp.pb(make_pair(b[i], a[i]));
    sort(vp.begin(), vp.end());
    int end=vp[0].f, c=1;
    for (int i=1; i<n; i++){
        if (end<=vp[i].s){
            c++;
            end=vp[i].f;
        }
    }
    cout << c;
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}