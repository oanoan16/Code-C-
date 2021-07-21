#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n;
	cin >> n;
    int a[n];
    vector <int> b, c;
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (i&1) c.push_back(a[i]);
        else b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int j=0, k=c.size();
    for (int i=0; i<n; i++){
        if (i&1) cout << c[--k] << " ";
        else {
            cout << b[j++] << " ";
        }
    }
    
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}