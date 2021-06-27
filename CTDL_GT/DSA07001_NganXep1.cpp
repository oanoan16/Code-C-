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
    int  a[205], t, cpush=0;
    string s;
    stack <int> st;
    while (cin >> s){
        if (s=="push"){
            cin >> t;
            st.push(t);
            a[cpush++]=t;
        }
        else if (s=="pop"){
            if (!st.empty()) {
                st.pop();
                cpush--;
            }
        }
        else {
            if (!st.empty()){
                for (int i=0; i<cpush; i++) cout << a[i] << " ";
            }
            else {
                cout << "empty";
            } 
            cout << endl;
        }
        
    }  
    return 0;
}


