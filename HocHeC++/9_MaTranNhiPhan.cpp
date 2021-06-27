#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, k=0, a, b, c, s;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a >> b >> c;
        s=a+b+c;
        if (s==2 || s==3) k++;
    }
    cout << k;
    cout << endl;
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}




