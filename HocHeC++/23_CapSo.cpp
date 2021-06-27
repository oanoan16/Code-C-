#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int l=0;
        int r=n-1, c=0;
        while (l<r){
            if (a[l]+a[r]>=k){
                c+=(r-l);
                r--;
            }
            else l++;
        }
        cout << c;
        cout << endl;
    }
    return 0;
}


