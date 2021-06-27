#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    int n, c=-1;
    cin >> n;
    int a[n];
    map <int, int> m;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for (int i=0; i<n; i++){
        if (m[a[i]]>1){
            c=a[i];
            break;
        }
    }
    if (c==-1) cout << "NO";
    else cout << c;
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


