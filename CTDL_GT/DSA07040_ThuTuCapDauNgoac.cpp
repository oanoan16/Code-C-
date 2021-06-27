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
    int i=0;
    cin >> s;
    stack < int > st;
    for (auto ch:s){
        if (ch=='('){
            i++;
            st.push(i);
            cout << i << " ";
        }
        else if (ch==')'){
            cout << st.top() << " "; 
            st.pop();
        }
    }
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


