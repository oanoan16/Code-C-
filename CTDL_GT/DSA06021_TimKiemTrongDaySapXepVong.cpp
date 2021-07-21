#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int find (int *a, int l, int r, int k){
    if (l>r) return -1;
    int mid=(l+r)/2;
    if (a[mid]==k) return mid;
    if (a[l]<a[mid]){
        if (k>=a[l] && k<a[mid]) 
            return find(a, l, mid-1, k);
        return find(a, mid+1, r, k);
    }
    if (k>a[mid] && k<=a[r])
        return find(a, mid+1, r, k);
    return find(a, l, mid-1, k);
}

void solve(){
    int n, a[MAX], k;
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];
    cout << find (a, 0, n-1, k)+1<< endl;    
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


