#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
ull a[55];
ull find(ull n, ull k, ull l, ull r){
    if (l==r && l==1) return 1;
    if (l > k) return find(n/2, k/2, l-k, r-k);
    if (r < k) return find(n/2, k/2, l, r);
    if (l == k) return find(n/2, k/2, 1, r-k) + (n&1);
    if (r == k) return find(n/2, k/2, l, r-1) + (n&1);
    return find(n/2, k/2, l, k-1) + find(n/2, k/2, 1, r-k) + (n&1);
}

int main(){
	faster();
    int t;
    cin >> t;
    while(t--){
        ull n, l ,r, k=1, b;
        cin >> n >> l >> r;
        while(n>=k)  k*=2;
        k/=2;
        b=find(n, k, l, r);
        cout << b << endl;
    }
	return 0;
}
