#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vs sbir;
bool check(string s){
    int c=0, t=0;
    if (s[s.size()-1]=='H') return false;
    s='H'+s;
    for (int i=0; i<s.size()-1; i++)
        if (s[i]=='H' && s[i]==s[i+1]) return false;
    return true;
}

void Try(int i, string s){
    if (s.size()==i){
        if (check(s)) sbir.push_back('H'+s);
    }
    else {
        Try(i, s+'A');
        Try(i, s+'H');
    }
}
void solve(){
    int n;
    cin >> n;
    sbir.clear();
    Try(n-1, "");
    for (int i=0; i<sbir.size(); i++) cout << sbir[i] << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}