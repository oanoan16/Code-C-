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
    int n, m;
    ll s=0;
    cin >> n >> m;
    int a[n][m], kernel[3][3];
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j) cin >> a[i][j];
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++) cin >> kernel[i][j];
    }
    for (int i=0; i<n-2; ++i){
        for (int j=0; j<m-2; ++j){
            for (int k=2; k>=0; --k){
                for(int h=2; h>=0; --h){
                    s+=a[i+k][j+h]*kernel[k][h];
                }
            }

        }

    }
    cout << s << endl;
}
int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


