#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	string s1;
    cin >> s1;
    int a[26]={0}, c=0;
    for (int i=0; i<s1.size(); i++) a[s1[i]-'a']++;
    for (int i=0; i<26; i++){
        c=max(c, a[i]);
    }
    if ((s1.size()-c)>=c-1) cout << 1;
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