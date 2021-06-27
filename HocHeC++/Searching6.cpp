#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

bool compare(int x, int y){
    return abs(x) < abs(y);
}

void solve(){
    int n, min=INT_MAX, ans, c;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            if (i!=j){
                c=a[i]+a[j];
                if (abs(c)<min){
                    min=abs(c);
                    ans=c;
                }
            }
        }
    }
    cout << ans;
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


