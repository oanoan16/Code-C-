#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define INF INT_MAX
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;

void solve(){
    int n, c=1, len=1;
    cin >> n;
    vector <int> a(n), index(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
        index[a[i]-1]=i;
    } 
    for (int i=1; i<n; i++){
        if (index[i]>index[i-1]){
            c++;
            len=max(len, c);
        }
        else c=1;
    }
    cout << n-len;
    cout << endl;
}

int main(){
    faster();
    int t=1;
 //   cin >> t;
    while (t--) solve();
    return 0;
}