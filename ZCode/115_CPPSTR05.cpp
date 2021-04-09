#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve(){
	string s;
    cin >> s;
    unordered_map<char, int> m; 
    int max_freg=0;
    for (int i=0; i<s.size(); i++){
        m[s[i]]++;
        if (m[s[i]]>max_freg){
            max_freg= m[s[i]];
        }
    }
    if ((s.size()-max_freg)>max_freg-1)  cout << 1;
    else cout << 0;
    cout << endl;
}

int main(){	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
