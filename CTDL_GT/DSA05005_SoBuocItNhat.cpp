#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, a[1005], len[1005], ans=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
        len[i]=1;
    }
    for (int i=1; i<n; i++){
        for (int j=0; j<i; j++){
            if (a[i]>=a[j] && len[i]<len[j]+1){
                len[i]=len[j]+1;
                ans=max(ans, len[i]);
            } 
        }
    }
    cout << n-ans;
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




