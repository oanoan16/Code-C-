#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 1000000007
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
ll bintodec(string s){
    ll res=0;
    int j=1;
    for (int i=s.length()-1; i>=0; i--){
        res+=j*(s[i]-'0');
        j*=2;
    }
    return res;
}
void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    ll ans=bintodec(s1)*bintodec(s2);
    cout << ans;
    cout <<endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--) solve();	
	return 0;
}

