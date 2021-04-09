#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, a[11], s=0;

void gray1(string s){
    string bir="0", gray="";
    bir+=s;
    for (int i=0; i<s.size(); i++){
        if (s[i]==bir[i]) gray+='0';
        else gray+='1';
    }
    cout << gray << " ";
}

void Try(int i, string s){
    if (s.size()==i) gray1(s);
    else {
        Try(i, s+'0');
        Try(i, s+'1');
    }
    
}

void solve(){
    cin >> n;
    Try(n, "");
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


