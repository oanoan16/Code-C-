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
    int  n, a[100000], b[100000];
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int j=0; j<n-1; j++) cin >> b[j];
    for (int i=0; i<n-1; i++){
        if (a[i]!=b[i]){
            cout << i+1;
            break;
        }
    }
    cout << endl;
}

int main(){
	faster();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

