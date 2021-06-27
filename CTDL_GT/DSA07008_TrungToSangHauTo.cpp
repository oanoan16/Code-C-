#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int priority(char c){
    if(c == '(' || c == ')') 
        return 1;
	if (c == '+' || c == '-')
		return 2;
	else if (c == '*' || c == '/' || c == '%')
		return 3;
	else if (c == '^')
		return 4;
	return 0;
}

void solve(){
    string s;
    cin >> s;
    string ans="";
    stack <char> st;
    for (auto c:s){
        if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
            ans+=c;
        else if (c=='(') st.push(c);
        else if (c==')'){
            while (!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            if (st.top()=='(') st.pop();
        }
        else {
            while (!st.empty() && (priority(c)<=priority(st.top()))){
                ans+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        if (st.top()!='(' && st.top()!=')')
            ans+=st.top();
        st.pop();
    }
    cout << ans;
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


