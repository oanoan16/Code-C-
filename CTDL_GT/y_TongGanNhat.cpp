#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, ans=-1, m, s=0;
	cin >> n >> m;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i=0; i<n-2; i++){
        for (int j=i+1; j<n-1; j++){
            for (int k=j+1; k<n; k++){
                s=a[i]+a[j]+a[k];
                if (s<=m){
                    ans=max(s, ans);
                }
            }
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