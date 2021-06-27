#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int equal(string s){
    for (int i=0; i<s.size()-1; i++){
        if (s[i]!=s[i+1]) return 0;
    }
    return 1;
}


int increase(string s){
    for (int i=0; i<s.size()-1; i++){
        if (s[i]>=s[i+1]) return 0;
    }
    return 1;
}

int lucky(string s){
    int c=0;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='6' || s[i]=='8') c++;
    }
    if (c==5) return 1;
    else return 0;
}

int check(string s){
    if (s[2]!=s[3] && s[0]==s[1] && s[1]==s[2] && s[3]==s[4])
        return 1;
    return 0;
}



void solve(){
    string s, t="";
    cin >> s;

    for (int i=5; i<s.size(); i++){
        if (s[i]>='0' && s[i]<='9') t+=s[i];
    }
    int ans=lucky(t)+equal(t)+check(t)+increase(t);
    if (ans>0) cout << "YES";
    else cout << "NO";

    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


