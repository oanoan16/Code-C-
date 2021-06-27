#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define INF INT_MAX
// #define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;

void solve(){
    int n, c=0;
    cin >> n;
    int f=0, s=0;
    if (n>=4){
        for (int i=n/7; i>=0; i--){
            int j=n-(i*7);
            if (j%4==0){
                c=1;
                for (int k=0; k<j/4; k++) cout <<4;
                for (int k=0; k<i; k++) cout <<7;
                break;
            }
        }
    }
    if (!c) cout <<-1;
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}