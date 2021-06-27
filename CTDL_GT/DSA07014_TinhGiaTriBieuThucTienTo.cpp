#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int cal(int a, int b, char c){
    if (c=='+') return a+b;
    if (c=='-') return a-b;
    if (c=='*') return a*b;
    if (c=='/') return a/b;
}

void solve(){
    string s;
    cin >> s;
    stack <int> st;
    int n=s.length();
    for (int i=n; i>=0; i--){
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            st.push(cal(op1, op2, s[i]));
        }
        else {
            st.push(s[i]-48);
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


