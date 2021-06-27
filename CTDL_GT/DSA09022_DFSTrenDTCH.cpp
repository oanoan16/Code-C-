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
    int n, e, ans[1005], c=0, v[1005]={0}, k;
    cin >> n >> e >> k;
    vector <int> a[n+1];
    for (int i=0; i<e; i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }
    v[k]=1;
    stack <int> s;
    s.push(k);
    ans[++c]=k;
    while(!s.empty()){
        int x=s.top();
        s.pop();
        for (auto j:a[x]){
            if (!v[j]){
                ans[++c]=j;
                v[j]=1;
                s.push(x);
                s.push(j);
                break;
            }
        }
    }
    for (int i=1; i<=c; i++)
        cout << ans[i] << " ";
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