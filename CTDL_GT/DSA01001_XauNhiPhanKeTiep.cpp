#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    string s;
    cin >> s;
    int i=s.size()-1;
    while (i>=0 && s[i]=='1'){
        s[i]='0';
        i--;
    }
    if (i>=0){
        s[i]='1';
    }
    cout << s << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


