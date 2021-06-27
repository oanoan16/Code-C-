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
    int n, m;
	cin >> n >> m;
    vector <ll> a(n), b(m), c(m+n, 0);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            c[i+j]=c[i+j]+a[i]*b[j];
        }
    }
    for (int i=0; i<m+n-1; i++) cout << c[i] << " ";
    cout <<endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--) solve();	
	return 0;
}

