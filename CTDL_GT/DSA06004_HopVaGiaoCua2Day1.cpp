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
    int n, m, a[100000], b[100000];
    cin >> n >> m;
    set <int> s;
    set <int> s1;
    for (int i=0; i<n; i++){
        cin >> a[i];
        s.insert(a[i]);
        s1.insert(a[i]);
    }
    for (int i=0; i<m; i++){
        cin >> b[i];
        s.insert(b[i]);
    }

    for (auto it=s.begin(); it!=s.end(); it++) cout <<*it << " ";
    cout << endl;

    for (int i=0; i<m; i++){
        if (s1.find(b[i])!=s1.end()) cout << b[i] << " ";
    }
    cout <<endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}