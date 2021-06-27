#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int a[26];
char b[26];
void solve(){
	string s;
    cin >> s;
    memset(a, 0, sizeof(a));
    memset(b, '0', sizeof(b));
    int c=0;
    a[0]=1;
    b[0]=s[0];
    for (int i=1; i<s.size(); i++){
        int r=0;
        for (int j=0; j<=c; j++){
            if (s[i]==b[j]){
                r=1;
                a[j]++;
            }
        }
        if (r==0){
            b[++c]=s[i];
            a[c]=1;
        }
    }
    for(int i=0; i<26; i++) if (a[i]==1) cout << b[i];
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




