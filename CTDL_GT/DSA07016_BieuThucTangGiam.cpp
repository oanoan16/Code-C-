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
    string s, ans="";
    cin >> s;
    stack <char> st;
    int n=s.length();
    for (int i=0; i<=n; i++){
        st.push(i+1+'0');
        if (i==n || s[i]=='I'){
            while (!st.empty()){
                ans+=st.top();
                st.pop();
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


