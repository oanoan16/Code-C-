#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, a[1005], b[1005], ans=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
        b[i]=1;
    }
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (a[i]<a[j]) b[j]=max(b[j], b[i]+1);
        }
    }
    for (int i=0; i<n; i++) ans=max(ans, b[i]);
    cout << ans;
    cout << endl;
}   

int main()
{
    faster();
    solve();
    return 0;
}


