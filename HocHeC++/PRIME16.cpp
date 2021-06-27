#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;


vector <int> v;

void isPrime(){
	bool check[N];
	memset (check, true, sizeof(check));
	for (int i=2; i<=sqrt(N); i++){
		if (check[i]==true){
			for (int j=2*i; j<=N; j+=i){
				check[j]=false;
			}
		}
	}
	for (int i=2; i<=N; i++){
		if (check[i]) v.push_back(i);
	}
}

void solve(){
	ll n;
    cin >> n;
    n=sqrt(n);
    int i=0;
    while (v[i]<=n){
        i++;
    }
    cout << i;
    cout << endl;
}

int main(){
    faster();
    isPrime();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




