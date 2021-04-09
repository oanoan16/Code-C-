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
    int n, ans=0;
    unordered_map <int, int> m;
    cin >> n;
    for (int i=0; i<n; i++){
        int v;
        cin >> v;
        m[v]++;
    }
    for (auto i:m){
        if (i.second>(n/2)) ans=i.first;
    }
    if (ans==0) cout << "NO";
    else cout << ans;
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


