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
   string gray, bir="";
   cin >> gray;
   bir+=gray[0];
   for (int i=1; i<gray.size(); i++){
       if (gray[i]=='0') bir+=bir[i-1];
       else bir+='1'-bir[i-1]+48;
   }
   cout << bir << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


