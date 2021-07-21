#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[10]={1,2,5,10,20,50,100,200,500,1000}, t,n,m;

void solve(){
    int n, a[100000];
    long long s=0;
    cin >> n;
    for (int i=0; i<n; i++){
       cin >> a[i];
    }
    sort(a, a+n);
    for (int i=1; i<n; i++){
       s+=a[i]*i%base;
       s%=base;
    }
    cout << s << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


