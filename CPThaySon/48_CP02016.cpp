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
    int n;
    cin >> n;
    int a[n/2+1], b[n/2], c=0, d=0;
    for (int i=1; i<=n; i++){
        int v;
        cin >> v;
        if (i%2==1){
            a[c++]=v;
        }
        else b[d++]=v;
    }
    sort(a, a+c);
    sort(b, b+d);
    for (int i=0; i<d; i++) cout << a[i] << " " << b[d-i-1] << " ";
    if (n%2!=0) cout << a[d];
}

int main(){
	faster();
    solve();
    return 0;
}


