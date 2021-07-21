#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

bool prime(int n){
	if (n<2) return false;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0) return false;
    }
    return true;
}

void solve(){
    int n;
    int c=0;
    cin >> n;
    if (prime(n)) c=1;
    if (c) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main(){
    faster();
 //   int t;
//    prime();
//    cin >> t;
//    while (t--) 
    solve();
    return 0;
}


