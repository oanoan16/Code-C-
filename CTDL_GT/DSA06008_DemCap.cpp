#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int solve(){
    int n, m, ans=0;
    cin >> n >> m;
    int a[n], b[m], c[1005]={0};
    for (int i=0; i<n; i++)cin >> a[i];
    for (int i=0; i<m; i++){
        cin >> b[i];
        c[b[i]]++;
    } 
    
    for (int i=1002; i>=3; i--){
        c[i]+=c[i+1];
    }

    for (int i=0; i<n; i++){
        switch(a[i]){
            case 0: 
                break;
            case 1:
                ans+=c[0];
                break;
            case 2:
                ans+=c[5];
                goto add;
                break;
            case 3:
                ans+=(c[2]+c[4]);
                goto add;
                break;
            default:
                ans+=c[a[i]+1];
            add:
                ans+=c[0]+c[1];
                break;
        }
    }
    return ans;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) cout << solve() << endl;  
    return 0;
}


