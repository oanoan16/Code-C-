#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
 
// n=n-1-tmp/2
// if n=n-1-tmp/2=0 thi o cuoi chuoi truoc
//  COWWCO tmp
//  OCOWWC tmp+1  (n-(tmp+1))

void solve(){
    string s;
    ll n, len, tmp;
    cin >> s >> n;
    len=s.size();
    while (len<n){
        tmp=len;
        while (n>tmp) tmp*=2;
        tmp/=2;
        n-=(tmp+1);
        if (n==0) n=tmp;
    }
    cout << s[n-1];
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}