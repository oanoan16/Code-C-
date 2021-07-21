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
    int n;
    cin >> n;
    int a[n+1];
    int j=1;
    while (j<=n){
        for (int i=1; i<=j; i++) a[i]=6;
        while (1){
            for (int i=1; i<=j; i++) cout << a[i];
            cout << " ";
            int i=j;
            while (i>0 && a[i]==8) {
                a[i]=6;
                i--;
            }
            if (i==0){ 
                j++;
                break;
            }
            else a[i]=8;
        }
    }
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
