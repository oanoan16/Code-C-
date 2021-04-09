#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll a[N];

void solve(){
    int n, k;
    cin >> n >> k;
    for (int i=0; i<n*n; i++) cin >> a[i];
    sort(a, a + n*n);
    cout << a[k-1] << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 