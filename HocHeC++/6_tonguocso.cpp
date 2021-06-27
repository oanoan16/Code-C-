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

void solve(){
    ll n;
    cin >> n;
    ll ans=0;
    if (sqrt(n)*sqrt(n)==n) ans+=sqrt(n);
    for (int i=1; i<sqrt(n); i++){
        if (n%i==0){
            ans=ans+i+(n/i);
        }
    }
    cout << ans << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}


