#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n;
void Try(string s){
    if (s.size()==n) cout << s << " ";
    else {
        Try(s+'A');
        Try(s+'B');
    }

}
void solve(){
    cin >> n;
    Try("");
    cout << endl;

}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


