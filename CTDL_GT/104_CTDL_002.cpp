#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, k, a[15], v[15], ans[15], r[15][15]={0}, s, check=-1, cnt=0;

void Try(int i, int c){
    if (i>n || c>k) return;
    if (s==k) {
        cnt++;
        for (int h=1; h<i; h++) r[cnt][h]=ans[h];
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
    cnt=0;
    memset(v, 0, sizeof(v));
    s=0;
    Try(1, 0);
    for (int i=cnt; i>0; i--){
        for (int j=1; j<n; j++)
            if (r[i][j]!=0) cout << r[i][j] << " ";
        cout << endl;
    }
    cout << cnt;
    cout << endl;
}

int main(){
    faster();
    solve();
    return 0;
}