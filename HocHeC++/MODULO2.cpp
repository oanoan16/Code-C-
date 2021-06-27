#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
   int a, m, c=-1;
   cin >> a >> m;
   for (int i=0; i<m; i++){
       if (a*i%m==1){
           c=i;
           break;
       }
   }
   cout << c << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}