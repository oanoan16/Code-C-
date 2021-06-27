#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    int n, c=0, b;
    cin >> n;
    int a[n];
    for (int i=0; i<n-1; i++) cin >> a[i];
    for (int i=1; i<n-1; i++) {
        b=a[i]-a[i-1];
        if (b>1){
            c=a[i-1]+1;
            break;
        }
    }
    cout << c;
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


