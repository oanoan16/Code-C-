#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

bool compare(string a, string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab > ba;
}

void solve(){
    int n;
    cin >> n;
    vector <string> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(),compare);
    for (int i=0; i<v.size(); i++){
        cout << v[i];
    }
    cout << endl;    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


