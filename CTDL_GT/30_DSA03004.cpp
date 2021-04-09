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
    int n, a[100000];
    long x=0, y=0;
    cin >> n;
    for (int i=0; i<n; i++){
       cin >> a[i];
    }
    sort(a, a+n);
    for (int i=0; i<n; i++){
       if(i & 1) x=x*10+a[i];
       else y=y*10+a[i];
    }
    cout << x+y << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


