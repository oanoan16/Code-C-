#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    int n, c, j=-1;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    c=n-n/2;
    for (int i=0; i<n; i+=2){
        if (j<=c) b[i]=a[++j];
    }
    for (int i=1; i<n; i+=2){
        if (j<n) b[i]=a[++j];
    }
    for (int i=0; i<n; i++) cout << b[i] << " ";
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


