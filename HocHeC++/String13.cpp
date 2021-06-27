#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    string s;
    int ans=0, k, c;
    cin >> s >> k;
    int a[26]={0};
    for (int i=0; i<s.size(); i++){
        c=0;
        memset(a, 0, sizeof(a));
        for (int j=i; j<s.size(); j++){
            if (a[s[j]-'a']==0) c++;
            a[s[j]-'a']++;
            if (c==k) ans++;
            else if (c>k) break;
        }
    }
    cout <<  ans;
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 