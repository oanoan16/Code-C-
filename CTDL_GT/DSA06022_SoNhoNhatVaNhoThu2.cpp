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
    int n, a[100000], b, c;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    b=a[0];
    c=1;
    while (a[c]==b && c<n) c++;
    if (c==n) cout << -1;
    else cout << b << " " << a[c];
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


