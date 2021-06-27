#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int f[5000];

void fibonaci(){
    ull b=-1, c=1, d;
    for (int i=0; i<18; i++){
        d=b+c;
        f[d]=1;
        b=c;
        c=d;
    }
 //   for (int i=0; i<100; i++) cout << i << " " <<  a[i] << " "<< endl;
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        if (f[a[i]]==1) cout << a[i] << " ";
    }
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


