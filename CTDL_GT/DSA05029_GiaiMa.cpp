#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int solve(){
    string s;
    cin >> s;
    int n=s.length();
    if (s[0]=='0') return 0;
    int f[n+1]={0};
    f[0]=1;
    f[1]=1;
    for (int i=2; i<=n; i++){
        if (s[i-1]>'0') f[i]=f[i-1];
        if (s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7'))
            f[i]+=f[i-2];
    }
    return f[n];
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) cout << solve() << endl;  
    return 0;
}


