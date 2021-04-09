#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int a[26];
void solve()
{
	string s;
    int k, ans=0;
    cin >> s >> k;
  
    for (int i=0; i<s.size(); i++){
        int c=0;
        memset(a, 0, sizeof(a));
        for (int j=i; j<s.size(); j++){
            if (a[s[j]-'a'] == 0)
                c++;
            a[s[j]-'a']++;
            if (c==k) ans++;
            if (c>k) break;
        }
    }
    cout << ans << endl;
}

int main()
{	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
