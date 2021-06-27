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

void solve(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    n+=1;
    int f[n+1][n+1];
    s.insert(0, " ");
    for (int i=0; i<=n; i++){
        for (int j=0; j<=n; j++){
            if (i==0 || j==0) f[i][j]=0;
            else if  (s[i]==s[j] && i!=j) f[i][j]=f[i-1][j-1] + 1;
            else f[i][j]=max(f[i][j-1], f[i-1][j]);
        }
    }
    cout << f[n][n];
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
