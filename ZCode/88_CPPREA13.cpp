#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve(){
	int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    sort(a, a+n);
    int tmp=a[0]-1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (a[j]==b[i]){
                cout << a[j] << " ";
                a[j]=tmp;
            }
            if (a[j]>b[i]) break;
        }
    }
    for (int i=0; i<n; i++){
        if (a[i]!=tmp) cout << a[i] << " ";
    }
    cout << endl;
}

int main(){	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
