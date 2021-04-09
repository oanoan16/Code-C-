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
    int  n, a[1005];
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    int l=1, r=n, c=0;
    while (l<=r && a[l]==0){
        int mid=(l+r)/2;
        if (a[mid]==0){
            c+=(mid-l+1);
            l=mid+1;
        }
        else r=mid-1;
    }
    cout << c;
    cout << endl;
}

int main(){
	faster();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

