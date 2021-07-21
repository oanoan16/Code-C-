#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100000
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

bool solve(){
    string s;
    cin >> s;
    stack <int> st;
    for (int i=0;  i<s.size(); i++){
        if (s[i]==')'){
            char c=st.top();
            st.pop();
            int check=1;
            while (c!='('){
                if (c=='+'||c=='-' || c=='*' || c=='/') check=0;
                c=st.top();
                st.pop();
            }
            if (check==1) return true;
        }
        else st.push(s[i]);
    }
    return false;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) {
        if (solve()) cout << "Yes";
        else cout << "No";
        cout << endl;
    }

    return 0;
}