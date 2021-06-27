#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    ll n;
    int c=0;
    cin >> n;
    for (int i=1; i<=sqrt(n); i++){
        if (n%i==0){
            if (i*i==n && i%2==0) c++;
            else {
                if (i%2==0) c++;
                if ((n/i)%2==0) c++;
            }

        }
    }
    cout << c;
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


