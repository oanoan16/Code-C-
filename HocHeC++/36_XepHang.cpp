#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

bool compare(const pair<int, int> &a, const pair<int, int>&b){
    if (a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}

void solve(){
    int n, c=0, u, x;
    cin >> n;
    vector <pair<int, int>> v;
    for (int i=0; i<n; i++) {
        cin >> u >> x;
        v.push_back(make_pair(u, x));
    }
    sort(v.begin(), v.end(), compare);
    c=v[0].first+v[0].second;
    for (int i=1; i<v.size(); i++){
        if (c<v[i].first) c=v[i].first + v[i].second;
        else c+=v[i].second;
    }
    cout << c;
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
//    cin >> t;
    while (t--) solve();
    return 0;
}


