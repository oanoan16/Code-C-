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
    int n, a[1005];
    cin >> n;
    for (int i=0; i<n; i++){
       cin >> a[i];
    }
    sort(a, a+n);
    int l=0, r=n-1;
    while(l<=r){
        cout << a[r] <<  " ";
        if (a[l]!=a[r]) cout << a[l] << " ";
        ++l; --r;
    }
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