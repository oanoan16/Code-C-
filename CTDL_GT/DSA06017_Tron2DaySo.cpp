#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, m, a[MAX];
    cin >> n >> m;
    n+=m;
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i=0; i<n; i++) cout << a[i] <<  " ";
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


