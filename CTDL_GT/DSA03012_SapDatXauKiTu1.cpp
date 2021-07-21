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
    int c=-1, maxF=0;
    cin >> s;
    unordered_map<char, int> mF;
    for (int i=0; i<s.size(); i++){
        mF[s[i]]++;
        maxF=max(maxF, mF[s[i]]);
    }
    if (maxF<=(s.size()-maxF+1)) c=1;
    cout << c;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


