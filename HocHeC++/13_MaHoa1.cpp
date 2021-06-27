#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	string s;
    cin >> s;
    int n=s.size(), check=0;
    for (int i=0; i<n; i++){
        int c=0;
        for (int j=i; j<n; j++){
            if (s[j]==s[i]){
                c++;
            }
            else {
                cout << c << s[i];
                i=j-1;
                c=0;
                break;
            }
            if (i==n-1 || j==n-1){
                cout << c << s[i];
                check=1;
                break;
            }
        }
        if (check) break;
    }
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




