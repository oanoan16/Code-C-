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

ll p[1005];

ll pwr(ll a, ll n){
    if (n==0) return 1;
    if (n==1) return a;
    if (n%2==0){
        ll r=pwr(a, n/2)%base;
        return (r*r)%base;
    }
    return (a*pwr(a, n-1))%base;
}

void init(){
    p[0]=1;
    for (int i=1; i<1005; i++) p[i]=(p[i-1]*i)%base;
}
ll nCk(int n, int k){
    if (n==0 || k==0) return 1;
    return (p[n]*pwr((p[k]*p[n-k])%base, inv))%base;
}

void solve(){
    int n, k;
    ll ans;
    cin >> n >> k;
    ans=nCk(n, k);
    if (ans<0) ans+=base;
    else ans%=base;
    cout << ans;
    cout << endl;
}   

int main()
{
    faster();
    int t;
    cin >> t;
    init();
    while (t--) solve();
    return 0;
}

/* tohop(k, n)=0 if k=0 || k=n
              =tohop(n-1, k-1) + tohop(n-1, k)
    c(k, n)=c(k, n-1) + c(k-1, n-1)
int solve(){
    int a[100][100], n, k;
    cin >> n >> k;
    if (k==0 || k==n) return 1;
    for (int i=0; i<=k; i++){
        for (int j=0; j<=n; j++){
            if (i==0 || i==j) a[i][j]=1;
            else a[i][j]=a[i][j-1]+a[i-1][j-1];
        }
    }
    return a[k][n];
}
*/


