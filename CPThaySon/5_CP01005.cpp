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
    int n;
    unordered_map <int, int> m;
    cin >> n;
    for (int i=0; i<n; i++){
        int v;
        cin >> v;
        m[v]++;
    }
    for (auto i:m){
        if (i.second & 1){
            cout << i.first << endl;
            break;
        }
    }
}

int main()
{
	faster();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


