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
    vector <ll> a(n);
    priority_queue <ll, vector<ll>, greater<ll>> pq;
    for (int i=0; i<n; i++){
        cin >> a[i];
        pq.push(a[i]);
    } 
    ll ans=0, v1, v2, v;
    while (pq.size()>1){
        v1=pq.top();
        pq.pop();
        v2=pq.top();
        pq.pop();
        v=(v1+v2)%base;
        ans=(ans+v)%base;
        pq.push(v);
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