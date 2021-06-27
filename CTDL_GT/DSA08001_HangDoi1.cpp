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
    int n, a, b;
    cin >> n;
    queue <int> q;
    while (n--){
        cin >> a;
        switch(a){
            case 1:
                cout << q.size() <<endl;
                break;
            case 2:
                if (q.empty()) cout << "YES";
                else cout << "NO";
                cout << endl;
                break;
            case 4:
                if (!q.empty()) q.pop();
                break;
            case 5:
                if (!q.empty()) cout << q.front() << endl;
                else cout << -1 << endl;
                break;
            case 6:
                if (!q.empty()) cout << q.back() << endl;
                else cout << -1 << endl;
                break;
            default:
                cin >> b;
                q.push(b);
        }
    }
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
}