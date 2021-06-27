#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

bool solve(){
    int n;
    cin >> n;
    vector <ll> v(n);
    ll val;
    for (int i=0; i<n; i++){
       cin >> v[i];
       v[i]=v[i]*v[i];
    }
    sort(v.begin(), v.end());
    for (int i=n-1; i>=2; i--){
        int l=0, r=i-1;
        while(l<r){
            if (v[l]+v[r]==v[i]) return true;
            else if (v[l]+v[r]>v[i]) r--;
            else l++;
        }
    }
    return false;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    cin.ignore();
    while (t--) {
        bool c=solve();
        if (c) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}


