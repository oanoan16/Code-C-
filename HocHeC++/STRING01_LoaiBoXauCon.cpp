#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	string s1, s2;
    getline(cin, s1);
    cin >> s2;
    stringstream ss;
    vector <string> vs;
    ss << s1;
    while (ss>>s1){
        if (s1.compare(s2)!=0) vs.push_back(s1);
    }
    for (int i=0; i<vs.size(); i++) cout << vs[i] << " ";
    cout << endl;
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}




