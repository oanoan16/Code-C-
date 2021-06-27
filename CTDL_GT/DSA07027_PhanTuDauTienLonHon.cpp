#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n;
    cin >> n;
    int a[n], ans[n];
    for (int i=0; i<n; i++) cin >> a[i];
    stack <int> st;
    for (int i=n-1; i>=0; i--){
        while (!st.empty() && st.top()<=a[i]){
            st.pop();
        }
        if (st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        st.push(a[i]);
    }
    for (int i=0; i<n; i++) cout << ans[i] << " ";
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


