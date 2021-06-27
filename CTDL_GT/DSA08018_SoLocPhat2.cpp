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
    cin >> n;
    int j=1;
    vector <string> v;
    while (j<=n){
        string s="";
        for (int i=1; i<=j; i++) s+='6';
        while (1){
            v.push_back(s);
            int i=j-1;
            while (i>=0 && s[i]=='8') {
                s[i]='6';
                i--;
            }
            if (i<0){ 
                j++;
                break;
            }
            else s[i]='8';
        }
    }
    cout << v.size() << endl;
    for (int i=0; i<v.size(); i++) cout << v[i] << " ";
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


