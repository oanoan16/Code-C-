#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
   ll a, k, s=0;
   cin >> a >> k;
   for (int i=1; i<=a; i++){
       s+=(i%k);
   }
   if (s==k) cout << 1;
   else cout << 0;
   cout <<  endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}