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
    int so=0, se=0;
    for (int i=0; i<s.size(); i++){
        if (i&1) so+=(s[i]-'0');
        else se+=(s[i]-'0');
    }
    if (abs(so-se)%11==0) cout << 1;
    else cout << 0;
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


