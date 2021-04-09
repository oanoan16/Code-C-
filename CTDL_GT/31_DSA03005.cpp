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
    int n, k, a[55], s=0, ans=0;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        cin >> a[i];
        s+=a[i];
    }
    k=min(k, n-k);
    sort(a, a+n);
    for (int i=0; i<k; i++) ans+=a[i];
    cout << s-2*ans;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


