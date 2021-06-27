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
    string s;
    cin >> n >> s;
    vector <ll> a(26, 0);
    priority_queue <int> pq;
    for (int i=0; i<s.size(); i++){
        a[s[i]-65]++;
    } 
    for (int i=0; i<26; i++) pq.push(a[i]);
    while (n-- && !pq.empty()){
        int c=pq.top();
        pq.pop();
        if (c==0) break;
        else pq.push(--c);
    }
    ll ans=0, v1;
    while (pq.size()>0){
        v1=pq.top();
        pq.pop();
        ans+=v1*v1;
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