#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int find(int n, int k){
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            while (n%i==0){
                if (k==1) return i;
                k--;
                n/=i;
            }
        }
    }
    if (n>2 && k==1) return n;
    return -1;
}

void solve(){
	int n, k;
    cin >> n >> k;
    cout << find(n, k);
	cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




