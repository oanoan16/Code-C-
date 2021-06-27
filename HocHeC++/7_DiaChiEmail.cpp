#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

string lowcase(string &s){
    for (int i=0; i<s.size(); i++){
        if (s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    return s;
}
void solve(){
	string s1;
    getline(cin, s1);
    lowcase(s1);
    stringstream ss;
    vector <string> vs;
    ss << s1;
    int c=0;
    while (ss>>s1){
        vs.push_back(s1);
        c++;
    }
    for (int i=0; i<c-1; i++) cout << *vs[i].begin();
    cout << vs[c-1];
    cout << "@ptit.edu.vn";
    cout << endl;
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}




