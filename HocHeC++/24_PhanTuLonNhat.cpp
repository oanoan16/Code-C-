#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

bool compare(int x, int y){
    return abs(x) < abs(y);
}

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int i=n-1;
    while (k--){
        cout << a[i] << " ";
        i--;
    }
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


