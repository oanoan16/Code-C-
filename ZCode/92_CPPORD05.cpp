#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int a[N];
void solve(){
	int n, ans=0, c=0;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++){
       for (int j=i+1; j<n; j++){
           if (a[j]>=a[i]){
               ans=max(ans, a[j]-a[i]);
               c=1;
           }
       }
    }
    c ? cout << ans : cout << -1;
    cout << endl;
}

int main(){	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
