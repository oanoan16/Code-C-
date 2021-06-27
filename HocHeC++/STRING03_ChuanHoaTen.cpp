#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

string standard(string &s){
    for (int i=0; i<s.size(); i++){
        if (s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    s[0]-=32;
    return s;
}

string upcase(string &s){
    for (int i=0; i<s.size(); i++){
        if (s[i]>='a' && s[i]<='z') s[i]-=32;
    }
    return s;
}

void solve(){
	string s1;
    getline(cin, s1);
    stringstream ss;
    vector <string> vs;
    ss << s1;
    while (ss>>s1){
        vs.push_back(s1);
    }
    cout << standard(vs[0]);
    for (int i=1; i<vs.size()-1; i++) cout << " " << standard(vs[i]);
    cout << ", " <<upcase(vs[vs.size()-1]);
    cout << endl;
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}




