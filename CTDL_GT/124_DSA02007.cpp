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
    string s;
    int k, d=0, key, i=0;
    cin >> k;
    cin >> s;
    int n=s.length();
    while (d<k && i<n){
        int Max=-1;
        for (int j=n-1; j>i; j--){
            int v=s[j]-48;
            if (v>Max){
                Max=v;
                key=j;
            }
        }
        if (Max>s[i]-48){
            swap(s[i], s[key]);
            d++;
        }
        i++;
    }
    cout << s << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}