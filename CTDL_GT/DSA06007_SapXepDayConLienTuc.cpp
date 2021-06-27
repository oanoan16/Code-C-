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
    int n, a[100000], b[100000];
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(a, a+n);
    int l=0, r=n-1;
    while (a[l]==b[l]) l++;
    while (a[r]==b[r]) r--;
    cout << l+1 << " " << r+1;
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


