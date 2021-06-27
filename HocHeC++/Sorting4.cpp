#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set <int> s;
    for (int i=0; i<n; i++){ 
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i=0; i<m; i++){ 
        cin >> b[i];
        s.insert(b[i]);
    }
    for (auto i:s){
        cout << i <<  " ";
    }
    cout << endl;

    int i=0, j=0;
    while (i<n && j<m){
        if (a[i]<b[j]) i++;
        else if (a[i]>b[j]) j++;
        else{
            cout << b[j] << " ";
            i++;
            j++;
        }
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


