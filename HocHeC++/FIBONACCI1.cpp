#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
ull a[1005];
void fibonaci(){
    ull b=-1, c=1;
    for (int i=0; i<1005; i++){
        a[i]=(b+c)%base;
        b=c%base;
        c=a[i]%base;
    }
}

void solve(){
    int n;
    cin >> n;
    cout << a[n];
    cout << endl;
}

int main(){
    faster();
    int t;
    fibonaci();
    cin >> t;
    while (t--) solve();
    return 0;
}


