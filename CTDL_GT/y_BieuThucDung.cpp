#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define INF INT_MAX
// #define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;

void solve(){
    string s;
    cin >> s;
    stack <char> st;
    int ans=0, len=0;
    for (auto ch:s){
        if (ch=='('){
            len=0;
            st.push(ch);
        }
        else if (ch==')'){
            if (!st.empty() && st.top()=='('){
                st.pop();
                len++;
            }
            else {
                st.push(ch);
            }
        }
        ans=max(ans, len);
    }
    if (!st.empty()) cout << -1;
    else cout << ans;
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}