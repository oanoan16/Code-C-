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
    int m, n, a[100000], b[100000], k;
    cin >> m >> n >> k;
    for (int i=0; i<m; i++) cin >> a[i];
    for (int j=0; j<n; j++) cin >> b[j];
    priority_queue <int, vector <int>, greater<int> > pq;
    for (int i=0; i<m; i++) pq.push(a[i]);
    for (int i=0; i<n; i++) pq.push(b[i]);
    while (k-->1) pq.pop();
    cout << pq.top();
    cout << endl;
}

int main(){
	faster();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

