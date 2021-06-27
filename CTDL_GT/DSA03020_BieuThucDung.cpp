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
        if (st.empty()) len=0;
        if (ch=='['){
            if (st.empty() || st.top()=='[') st.push(ch);
            else {
                ans+=st.size()+len;
                len=0;
                st.pop();
            }
        }
        else{
            if (st.empty()){
                st.push(ch); 
                len=0;
            }
            else {
                if (st.top()=='['){
                    st.pop();
                    len+=2;
                }
                else st.push(ch);
            }
        }
    }
    cout << ans;
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}