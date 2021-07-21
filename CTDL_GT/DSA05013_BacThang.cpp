#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll pwr(ll n){
    if (n==0) return 1;
    if (n==1) return 2;
    if (n%2==0){
        ll r=pwr(n/2)%base;
        return (r*r)%base;
    }
    return (2*pwr(n-1))%base;
}

void solve(){
    int n, k;
    cin >> n >> k;
    ll a[100005]={0};
    a[0]=1;
    for (int i=1; i<=k; i++) a[i]=pwr(i-1)%base;
    for (int i=k+1; i<=n; i++){
        for (int j=1; j<=k; j++) a[i]+=a[i-j];
        a[i]%=base;
    }
    cout << a[n];
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
