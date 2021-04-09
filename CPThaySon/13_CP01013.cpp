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
    int n, a[100000], ans=-1;
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
    set <int> s;
    s.insert(-1);
    for (int i=n-1; i>=0; --i){
        if (s.find(a[i]) == s.end())
            s.insert(a[i]);
        else 
            ans=a[i];
    }
    if (ans==-1) cout << "NO";
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


