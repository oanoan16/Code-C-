#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vs sbir;
bool check(string s, int k){
    int c=0, t=0;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='A'){
            c++;
            if (c>=k) t++;
        }
        else c=0;
    }
    if (t==1) return true;
    else return false;
}

void Try(int i, int k, string s){
    if (s.size()==i){
        if (check(s, k)) sbir.push_back(s);
    }
    else {
        Try(i, k, s+'A');
        Try(i, k, s+'B');
    }
}
void solve(){
    int n, k;
    cin >> n >> k;
    sbir.clear();
    Try(n, k, "");
    cout << sbir.size() << endl;
    for (int i=0; i<sbir.size(); i++) cout << sbir[i] << endl;
}

int main()
{
    faster();
    solve();
    return 0;
}


