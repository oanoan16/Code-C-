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
    int n, s, a[205], b[40005]={0}, c=0, c0=0;
    cin >> n >> s;
    if (n!=0) {
        for (int i=1; i<=n; i++){
            cin >> a[i];
            if (a[i]==0) c0=1; 
        }
        if (s==0){
            if (c0) c=1;
            else c=0;
        }
        else {
            b[0]=1;
            for (int i=1; i<=n; i++){
                for (int t=s; t>=a[i]; t--){
                    if (b[t]==0 && b[t-a[i]]==1) b[t]=1;
                }
            }
            if (b[s]) c=1;
        }
    }
    if (c) cout << "YES";
    else cout << "NO";
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


