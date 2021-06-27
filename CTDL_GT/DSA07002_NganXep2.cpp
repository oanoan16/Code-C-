#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main(){
    faster();
    int t, n;
    cin >> n;
    string s;
    stack <int> st;
    while (n--){
        cin >> s;
        if (s=="PUSH"){
            cin >> t;
            st.push(t);
        }
        else if (s=="POP"){
            if (!st.empty()) {
                st.pop();
            }
        }
        else {
            if (!st.empty()){
               cout << st.top();
            }
            else {
                cout << "NONE";
            } 
            cout << endl;
        }
        
    }  
    return 0;
}


