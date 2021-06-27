#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll a[N], l[N], r[N];
void solve(){
    int n;
    cin >> n;
    ll ans=0;
    for (int i=0; i<n; i++) cin >> a[i];
    stack <int> s1, s2;
    s1.push(-1);
    for (int i=0; i<n; i++){
        while(s1.size()>1 && a[i]<=a[s1.top()]){
            s1.pop();
        }
        l[i]=s1.top()+1;
        s1.push(i);
    }
    s2.push(n);
    for(int i=n-1; i>=0; i--){
        while (s2.size()>1 && a[i]<=a[s2.top()]){
            s2.pop();
        }
        r[i]=s2.top()-1;
        s2.push(i);
    }
    for (int i=0; i<n; i++){
        ans=max(ans, (r[i]-l[i]+1)*a[i]);
    }
    cout << ans;
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


