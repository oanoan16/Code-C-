#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void insert(string &s1, string &s2){
    int maxL=max(s1.size()+1, s2.size()+1);
    while (s1.size()<maxL) s1.insert(0, "0");
    while (s2.size()<maxL) s2.insert(0, "0");
}
void solve(){
    int k, a[1000], r=0;
    string s1, s2;
    cin >> k >> s1 >> s2;
    insert(s1, s2);
    for (int i=s1.size()-1; i>=0; i--){
        int c=s1[i]+s2[i]-48*2+r;
        if (c<k){
            a[i]=c;
            r=0;
        }
        else{
            a[i]=c%k;
            r=1;
        }
    }
    for (int i=0; i<s1.size(); i++){
        if (i>0 || (i==0 && a[i]!=0)) cout << a[i];
    }
    cout << endl;
}

int main(){
	faster();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

