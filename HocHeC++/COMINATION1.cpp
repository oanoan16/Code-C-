#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void Try(int n, string s){
    if (s.size()==n) cout << s << " ";
    else {
        Try(n, s+'0');
        Try(n, s+'1');
    }
}
void solve(){
    int n;
    cin >> n;
    Try(n, "");
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


