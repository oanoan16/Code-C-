#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 1000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, cend=-1, cmax=-1, v;
    cin >> n ;
    vector <int> a(100005, 0);
    for (int i=0; i<n; i++){
        cin >> v;
        a[v]++;
        cmax=max(cmax, a[v]);
        cend=max(cend, v);
    }
    do{
        for (int i=0; i<=cend; i++){
            if (a[i]==cmax){
                while (a[i]--) cout << i << " ";
            }
        }
    }
    while (cmax--);
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


