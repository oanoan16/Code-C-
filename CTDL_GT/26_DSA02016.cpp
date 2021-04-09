#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[15][15], ans=0, v[15], n;

bool check(int r, int c){
    int i, j;
    for (i=1; i<=r; i++) 
        if (a[i][c]) return false;
    for (j=1; j<=c; j++)
        if (a[r][i]) return false;
    for (i=r, j=c; i>0 && j>0; i--, j--)
        if (a[i][j]) return false;
    for (i=r, j=c; i>=0 && j<=n; i--, j++)
        if (a[i][j]) return false;
    return true;
}

void backTrack(int i){
    for (int j=1; j<=n; j++){
        if (check(i, j)){
            a[i][j]=1;
            v[i]=j;;
            if (i==n) ans++;
            else backTrack(i+1);
            a[i][j]=0;
        }
    }
}

void solve(){
    cin >> n;
    ans=0;
    memset(v, 0, sizeof(v));
    memset(a, 0, sizeof(a));
    backTrack(1);
    cout << ans;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


