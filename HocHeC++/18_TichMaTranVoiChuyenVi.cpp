#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 107
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
int a[105][105];

int main(){
    faster();
    int t=1;
    cin >> t;
    int d=1;
    while (t--){
        int n, m;
        cin >> n >> m;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                cin >> a[i][j];
            }
        }

        cout << "Test " << d << ":" << endl;
        d++;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                ll s=0;
                for (int k=1; k<=m; k++){
                    s+=a[i][k]*a[j][k];
                }
                cout << s << " ";
            }
            cout << endl;
        }
    }
    return 0;
}


