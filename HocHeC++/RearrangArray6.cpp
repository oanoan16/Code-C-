#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    int n, c=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n-1; i++){
        if (a[i]!=0 && a[i]==a[i+1]){
            a[i]*=2;
            a[i+1]=0;
            i++;
        } 
    }
    for (int i=0; i<n; i++){
        if (a[i]!=0) {
            cout << a[i] << " ";
            c++;
        }
    }
    c=n-c;
    while (c--) cout << 0 << " "; 
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


