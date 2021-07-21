#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 1000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

bool isPrime[MAX];

void prime(){
	for (ll i = 2; i < MAX; i++)	isPrime[i] = true;
	for (ll i = 2; i < MAX; i++){
		if (isPrime[i])
			for (ll j = i * i; j < MAX; j += i)
				isPrime[j] = false;
    }
}

void solve(){
    int n, c=1;
    cin >> n;
    for (int i=2; i<n; i++){
        if (isPrime[i] && isPrime[n-i]){
            cout << i <<" " << n-i;
            c=0;
            break;
        }
    }
    if (c) cout << -1;
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    prime();
    while (t--) solve();
    return 0;
}


