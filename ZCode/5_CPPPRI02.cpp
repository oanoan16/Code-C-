#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	ll n, ans;
	cin >> n;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0){
			ans=i;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if (n>1) ans=n;
	cout << ans;
	cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}