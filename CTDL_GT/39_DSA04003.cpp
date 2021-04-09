#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 123456789
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ull pwr(int a, ull n){
    if (n==0) return 1;
    if (n==1) return a;
    if (n%2==0){
        ll r=pwr(a, n/2);
        return (r*r)%base;
    }
    return (a*pwr(a, n-1))%base;
}
void solve(){
    ull n;
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