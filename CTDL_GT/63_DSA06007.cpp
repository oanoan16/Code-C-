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
    int n, a[3]={0};
    cin >> n;
    for (int i=0; i<n; i++){
        int v;
        cin >> v;
        a[v]++;
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<a[i]; j++) cout << i <<  " ";
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


