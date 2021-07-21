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
    int  n, a[100005], k;
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
    int l=1, r=n, c=-1;
    while (l<=r){
        int mid=(l+r)/2;
        if (a[mid]==k){
           c=mid;
           break;
        }
        else{
            if (a[mid]<k) l=mid+1;
            else r=mid-1;
        }
    }
    if (c<0) cout << "NO";
    else cout << c;
    cout << endl;
}

int main(){
	faster();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

