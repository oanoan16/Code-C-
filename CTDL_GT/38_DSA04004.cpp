#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
ull b;
ull pwr(int a, int n){
    if (n==0) return 1;
    if (n==1) return a;
    if (n%2==0){
        ull r=pwr(a, n/2);
        return r*r;
    }
    return (a*pwr(a, n-1));
}

int find(ll n, ull k){
    b >>=1;
    if (k==b) return n;
    if (k<b) return find(n-1, k);
    return find(n-1, k-b);
}
void solve(){ 
    int n, a;
    ull k;
    cin >> n >> k;
    b=pwr(2, n);
    a=find(n, k);
    cout << a; 
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}