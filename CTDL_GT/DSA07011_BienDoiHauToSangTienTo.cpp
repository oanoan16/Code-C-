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
    cin >> s;
    stack <string> st;
    for (int i=0; i<s.length(); i++){
        if (!st.empty() && (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')){
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string tmp=s[i]+op2+op1;
            st.push(tmp);
        }
        else {
            st.push(string(1, s[i]));
        }
    }
    cout << st.top() << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


