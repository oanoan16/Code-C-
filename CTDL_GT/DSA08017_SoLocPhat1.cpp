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
    while (n){
        for (int i=1; i<=n; i++) a[i]=8;
        while (n){
            for (int i=1; i<=n; i++) cout << a[i];
            cout << " ";
            int i=n;
            while (i>0 && a[i]==6) {
                a[i]=8;
                i--;
            }
            if (i==0){ 
                n--;
                break;
            }
            else a[i]=6;
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


