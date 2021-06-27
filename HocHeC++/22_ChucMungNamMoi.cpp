#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <string> vs;
void solve(){
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string tmp="";
    while (ss >> s){
        tmp=tmp+s;
    }
    int check=0;
    for (int i=0; i<vs.size(); i++){
        if (tmp.compare(vs[i])==0) check=1;
    }
    if (check==0) vs.push_back(tmp);
}

int main(){
    faster();
    int t=1;
    cin >> t;
    cin.ignore();
    while (t--) solve();
    cout << vs.size();
    return 0;
}


