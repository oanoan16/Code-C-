#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int sum(string s){
    int x=0;
    for (auto c:s) x=x*10 + c -'0';
    return x;
}

void solve(){
    string s;
    int ans=0;
    cin >> s;
    for (int i=s.size(); i>=0; i--){
        if (s[i]>='0' && s[i]<='9'){
            ans+=s[i]-'0';
            s.erase(i, 1);
        }
    }
    sort(s.begin(), s.end());
    cout << s << ans;
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 