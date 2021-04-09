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
    ll ans, s=0;
    cin >> n;
    priority_queue <ll, vector<ll>, greater <ll> > pq;
    for (int i=0; i<n; i++){
        int v;
        cin >> v;
        pq.push(v);
    } 
    
    while (pq.size()>1){
        ans=pq.top();
        pq.pop();
        ans+=pq.top();
        pq.pop();
        s+=ans;
        pq.push(ans);
    }
    cout << s;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


