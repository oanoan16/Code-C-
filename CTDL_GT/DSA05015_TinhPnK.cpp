#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 1000000007
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, k;
    cin >> n >> k;
    ll ans=1;
    for (int i=n-k+1; i<=n; i++){
        ans*=i;
        ans%=N;
    }
    cout << ans;
    cout << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--) solve();	
	return 0;
}