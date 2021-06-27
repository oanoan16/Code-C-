#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

void solve(){
    int n; 
    string s;
	while (1){
        cin >> n;
        if (n!=0){
            cin >> s;
            string t="";
            for (auto c:s){
                if (c>='A' && c<='Z'){
                    t= a[(c-'A'+n)%28] +t;
                }
                else if (c=='_'){
                    t= a[(26+n)%28] +t;
                }
                else if (c=='.'){
                    t= a[(27+n)%28] +t;
                }
            }
            cout << t;
            cout << endl;
        }
        else break;
    }
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}




