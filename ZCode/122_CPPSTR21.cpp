#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
	string s;
    int sum=0;
    cin >> s;
    for (int i=s.size() - 1; ~i; --i){
        if (s[i]>='0' && s[i]<='9'){
            sum += s[i]-'0';
            s.erase(i, 1);
        }
    }
    sort(s.begin(), s.end());
    cout << s << sum << endl;
}

int main()
{	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
