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

void solve(){
	string s;
    cin >> s;
    int n=s.length(), ans=0;
    int f[n+1][n+1]={0};
    for (int i=n-1; i>=0; i--){
        for (int j=i; j<n; j++){
            if (i==j) f[i][j]=1;
            else if (j==i+1 && s[i]==s[j]) f[i][j]=1; 
            else if (s[i]==s[j]) f[i][j]=f[i+1][j-1];
            else f[i][j]=0;
            if (f[i][j]) ans=max(ans, j-i+1);
        }
    }
    cout << ans;
    cout << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--) solve();	
	return 0;
}