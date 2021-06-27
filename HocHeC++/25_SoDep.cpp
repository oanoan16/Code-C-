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
    cin >> s;
    int n=s.size(), c=1;
    for (int i=0; i<=n/2; i++){
        if ((s[i]-'0')%2!=0 || s[i]!=s[n-i-1]) c=0;
    }
    if (c) cout << "YES";
    else cout << "NO";
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


