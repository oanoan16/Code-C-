#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
typedef pair <int, int> pi;

bool comp(const pair <int, int> &x, const pair <int, int> &y){
    if (x.first==y.first) return (x.second < y.second);
    return (x.first<y.first);
}
void solve(){
    int n;
    cin >> n;
    vector <int> a[50];
    cin.ignore();
    for (int i=1; i<=n; i++){
        string s;
        int u;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> u){
            if (i<u) a[i].push_back(u);
        }
    }
    for (int i=1; i<=n; i++){
        for (auto j:a[i]) cout << i << " " << j << endl;
    }
}

int main()
{
    faster();
    solve();
    return 0;
}