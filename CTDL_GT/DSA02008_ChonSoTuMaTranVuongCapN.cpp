#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, k, a[15][15], v[15], r[100][100], s, cnt=0;

bool check(int row, int colum){
    for (int h=1; h<=row; h++)
        if (v[h]==colum) return false;
    return true;
}

void Try(int i){
    if (i>n) return;
    for (int j=1; j<=n; j++){
        if (check(i, j)){
            v[i]=j;
            s+=a[i][j];
            if (i==n){
                if (s==k){
                    cnt++;
                    for (int h=1; h<=n; h++) r[cnt][h]=v[h];
                }
            }
            else Try(i+1);
            s-=a[i][j];
            v[i]=0;
        }
    }
}

void solve(){
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
    s=0;
    cnt=0;
    memset(v, 0, sizeof(v));
    Try(1);
    cout << cnt << endl;
    for (int i=1; i<=cnt; i++){
        for (int j=1; j<=n; j++) cout << r[i][j] << " ";
        cout << endl;
    }
}

int main(){
    faster();
    solve();
    return 0;
}