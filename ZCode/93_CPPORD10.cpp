#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int a[N], f[N];
void solve(){
	int n, ans=1;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    f[0]=1;
    for (int i=1; i<n; i++){
        int res=0;
        for (int j=0; j<i; j++){
            if (a[i]>a[j]){
               res=max(res, f[j]);
            }
            f[i]=res+1;
            ans=max(ans, f[i]);
        }
    }
    cout << ans << endl;
}

int main(){	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
