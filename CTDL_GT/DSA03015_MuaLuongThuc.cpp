#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, s, m;
    cin >> n >> s >> m;
    int day=s/7, val=s*m;
    int ans=val/n + ((val%n==0) ? 0 : 1);
    if (ans>(s-day)) ans=-1;
    cout << ans ;
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
