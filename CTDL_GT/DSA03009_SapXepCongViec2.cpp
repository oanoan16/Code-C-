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
    int n, mtime=0;
    cin >> n;
    vector <pii> vp;
 //   vector <ll> a(n), b(n);
    for (int i=0; i<n; i++){
        int o, t, c;
        cin >> o >> t >> c;
        mtime=max(mtime, t);
        vp.pb(make_pair(c, t));
    } 
    sort(vp.begin(), vp.end(), greater<pii>());
    vector <bool> cnt(mtime+5, false);
    int ans=0, c=0;
    for (int i=0; i<n; i++){
        int index=-1;
        for (int j=vp[i].s; j>=1; j--){
            if (!cnt[j]){
                index=j;
                break;
            }
        }
        if (index!=-1){
            c++;
            cnt[index]=true;
            ans+=vp[i].f;
        }
    }
    cout << c << " " << ans;
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}