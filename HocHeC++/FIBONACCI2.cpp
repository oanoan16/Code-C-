#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
ull a[100];

void fibonaci(){
    ull b=-1, c=1;
    for (int i=0; i<95; i++){
        a[i]=b+c;
        b=c;
        c=a[i];
    }
//    for (int i=0; i<100; i++) cout << a[i] << " ";
}

void solve(){
    ull n;
    int c=0;
    cin >> n;
    for (int i=0; i<95; i++){
        if (n==a[i]) c=1;
    }
    if (c) cout << "YES";
    else cout << "NO";
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


