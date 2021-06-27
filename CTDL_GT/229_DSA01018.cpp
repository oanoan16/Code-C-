#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, k, a[1005]={0};
    cin >> n >> k;
    for (int i=0; i<k; i++) cin >> a[i];

    int j=k-1;
    while (j>0 && a[j]==a[j-1]+1) j--;

    if (a[j]>1) a[j]--;
    else a[j]=n-k+1;

    for (int i=j+1; i<k; i++) a[i]=n+i-k+1;

    for (int i=0; i<k; i++) cout << a[i] << " ";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
