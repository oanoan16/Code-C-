#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    int f[5][5]={0};
    int x=(s[0]-'0')%3;
    f[0][x]=1;
    for (int i=1; i<n; i++){
        x=(s[i]-'0')%3;
        f[i][x]=(f[i][x]+1)%3;
        for (int j=0; j<3; j++){
            f[i][j]=f[i-1][j]+f[i-1][(j+3-x)%3];
        }
    }
    cout << f[n-1][0];
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


