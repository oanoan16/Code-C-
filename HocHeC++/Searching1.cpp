#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, ans=-1, k;
	cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
	for (int i=0; i<n; i++){
        if (a[i]==k){
            ans=i+1;
            break;
        }
    }
    cout << ans << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}