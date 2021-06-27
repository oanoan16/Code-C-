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
    getline(cin, s);
    vector <string> v;
    stringstream ss;
    ss << s;
    int co=0, ce=0, c=0, ans=0;
    while (ss >> s){
        c++;
        if ((s[s.size()-1]-'0')&1) ce++;
        else co++;
    }
    if (ce!=co){
        if (c&1){
            if (ce>co) ans=1;
        }
        else {
            if (co>ce) ans=1;
        }
    }
    if (ans) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    cin.ignore();
    while (t--) solve();
    return 0;
}


