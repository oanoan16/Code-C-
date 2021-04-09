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
    int ans=0, len;
    cin >> s;
    stack < int > st;
    st.push(-1);
    for (int i=0; i<s.size(); i++){
        if (s[i]=='(') st.push(i);
        else{
            st.pop();
            if (st.empty()){
                st.push(i);
                continue;
            }
            len=i-st.top();
            ans=max(ans, len);
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


