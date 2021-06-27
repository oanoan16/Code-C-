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
    deque <int> dq;
    while (n--){
        cin >> s;
        if (s=="PUSHFRONT"){
            cin >> t;
            dq.push_front(t);
        }
        else if (s=="PUSHBACK"){
            cin >> t;
            dq.push_back(t);
        }
        else if (s=="POPFRONT"){
            if (!dq.empty()) dq.pop_front();
        }
        else if (s=="POPBACK"){
            if (!dq.empty()) dq.pop_back();
        }
        else if (s=="PRINTFRONT"){
            if (!dq.empty()) cout << dq.front();
            else cout << "NONE";
            cout << endl;
        }
        else if (s=="PRINTBACK"){
            if (!dq.empty()) cout << dq.back();
            else cout << "NONE";
            cout << endl;
        }
    }  
    return 0;
}


