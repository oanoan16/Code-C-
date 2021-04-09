#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
bool check[N]={false};
void prime(){
	for (int i = 2; i <= N; i++) check[i] = true;
	for (int i = 2; i <= N; i++){
		if (check[i])
			for (int j = 2 * i; j <= N; j += i)
				check[j] = false;
	}
}

void solve(){
    int l, r, c=0;
	cin >> l >> r;
	for (int i=l; i<=r; i++)
		if (check[i]) c++;
    cout << c << endl;
}

int main(){	
    faster();
    int t;
    cin >> t;
    prime();
    while (t--) solve();
    return 0;
}
