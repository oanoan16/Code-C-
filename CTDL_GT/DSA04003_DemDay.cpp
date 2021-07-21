#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 123456789
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll pwr(int a, ll n){
    if (n==0) return 1;
    if (n==1) return a;
    ll r=pwr(a, n/2);
    if (n&1) return (a*r*r)%base;
    return (r*r)%base;
}
void solve(){
    ll n;
    cin >> n;
    cout << pwr(2, n-1)%base; 
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}