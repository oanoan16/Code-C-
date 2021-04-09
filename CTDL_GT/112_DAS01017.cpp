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
   string s, gray="", bir="0";
   cin >> s;
   bir+=s;
   for (int i=0; i<s.size(); i++){
       if (bir[i]==s[i]) gray+='0';
       else gray+='1';
   }
   cout << gray << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


