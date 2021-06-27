#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    string s;
    cin >> s;
    int c=1, a[15]={0};
    if (s[0]=='0') c=0;
    else {
        for (auto i:s){
            if (i>='0' && i<='9'){
                a[i-'0']++;
            }
            else {
                c=0;
                break;
            }
        }
    }
    if (c){
        for (int i=0; i<10; i++){
            if (a[i]==0) c=2;
        }
        if (c==2) cout << "NO";
        else cout << "YES";
    }
    else cout << "INVALID";
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


