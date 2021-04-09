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
    int n, a[105], s=0, c=1, l[100000]={0};
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        s+=a[i];
    }
    if (s&1) c=0;
    else{
        s>>=1;
        l[0]=1;
        for (int i=1; i<=n; i++){
            for (int t=s; t>=a[i]; t--){
                if (l[t]==0 && l[t-a[i]]==1) l[t]=1;
            }
        }
        if (!l[s]) c=0;
    }
    if (c) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


