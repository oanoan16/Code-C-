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
    int n, a[55], b[55], ans=1;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
        b[i]=a[i];
    } 
    sort(b, b+n);
    for (int i=0; i<n; i++){
        if (b[i]!=a[i] && b[i]!=a[n-i-1]){
            ans=0;
            break;
        }
    }
    if (ans) cout << "Yes";
    else cout << "No";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


