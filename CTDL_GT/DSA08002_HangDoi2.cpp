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
    queue <int> q;
    while (n--){
        cin >> s;
        if (s=="PUSH"){
            cin >> t;
            q.push(t);
        }
        else if (s=="POP"){
            if (!q.empty()) {
                q.pop();
            }
        }
        else if (s=="PRINTFRONT"){
            if (!q.empty()){
               cout << q.front();
            }
            else {
                cout << "NONE";
            } 
            cout << endl;
        }
    }  
    return 0;
}


