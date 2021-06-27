#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    s1.insert(0, " ");
    s2.insert(0, " ");
    int m=s1.size();
    int n=s2.size();
    int f[m][n];
    f[0][0]=0;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (i==0 || j==0) f[i][j]=0;
            else if (s1[i]==s2[j]) f[i][j]=f[i-1][j-1]+1;
            else f[i][j]=max(f[i-1][j], f[i][j-1]);
        }
    }
    cout << f[m-1][n-1];
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


