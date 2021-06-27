#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	string s1;
    getline(cin, s1);
    stringstream ss;
    ss << s1;
    int c=0;
    while (ss>>s1){
        c++;
    }
    cout << c;
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
    cin.ignore();
	while (t--) solve();
    return 0;
}




