#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, k, a[15], v[15], ans[15], s, check=-1;

void print(int n){
    cout << "[" << ans[1];
    for (int i=2; i<n; i++) cout << " " << ans[i];
    cout << "] ";
}

void Try(int i, int c){
    if (i>n || c>k) return;
    if (s==k) {
        check=1;
        print(i);
    }
    for (int j=c+1; j<=n; j++){
        if (s+a[j]<=k){
            s+=a[j];
            ans[i]=a[j];
            Try(i+1, j);
            s-=a[j];
        }
    }
}

void solve(){
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    memset(v, 0, sizeof(v));
    s=0;
    check=-1;
    Try(1, 0);
    if (check<0) cout << check;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


