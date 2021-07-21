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
    int n, ans=-1;
    ull a[100005], x;
    cin >> n >> x;
    for (int i=1; i<=n; i++) cin >> a[i];
    int l=1, r=n;
    if (x>=a[1]){
        while (l<=r){
            if (x>=a[r]){
                ans=r;
                break;
            }
            int mid=(l+r)/2;
            if (x==a[mid]){
                ans=mid;
                break;
            }
            if (mid>1 && a[mid-1]<=x && a[mid]>x){
                ans=mid-1;
                break;
            }
            if (x<a[mid]) r=mid-1;
            if (x>a[mid]) l=mid+1;
        }
    }
    cout << ans;
    cout << endl;
}

int main(){
	faster();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

/*
int find(int l, int r, ull x, ull a[]){
    if (x < a[l]|| l>r) return -1;
    if (x>=a[r]) return r;
    int mid=(l+r)/2;
    if (x==a[mid]) return mid;
    if (mid>1 && a[mid-1]<=x && a[mid]>x) return (mid-1);
    if (x<a[mid]) find(l, mid-1, x, a);
    return find(mid+1, r, x, a);
}
ans=find(1, n, x, a);

*/