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
    stack <char> st;
    int n=0;
    for (auto& ch:s){
        if (ch==')' && !st.empty() && st.top()=='('){
            st.pop();
        }
        else{
            st.push(ch);
            if (ch==')') n++;
        }
    }
    int m=st.size();
    cout << m/2+n%2 << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


