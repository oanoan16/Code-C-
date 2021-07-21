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
    string s, t;
    int pos=0;
    cin >> t;
    for (auto c:t){
        switch(c){
            case '-':
                s.erase(pos-1, 1);
                break;
            case '<':
                if (pos>1) pos--;
                break;
            case '>':
                if (pos<s.size()) pos++;
                break;
            default:
                s.insert(pos, 1, c);
                pos++;
        }
    }
    cout << s;
}

int main()
{
    faster();
    int t=1;
 //   cin >> t;
    while (t--) solve();
    return 0;
}


