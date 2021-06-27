#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int solve(){
    int a[1005],  n, c=0;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    int tmp;
    for (int i=0; i<n; i++){
        tmp=i;
        for (int j=tmp; j<n; j++){
            if (a[j]<a[tmp]) tmp=j;
        }
        if (i!=tmp){
            c++;
            swap(a[i], a[tmp]);
        }
    }
    return c;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) cout << solve() << endl;  
    return 0;
}


