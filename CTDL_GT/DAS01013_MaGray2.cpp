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
   string gray, bin="";
   cin >> gray;
   bin+=gray[0];
   for (int i=1; i<gray.size(); i++){
       if (gray[i]=='0') bin+=bin[i-1];
       else bin+='1'-bin[i-1]+48;
   }
   cout << bin << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


