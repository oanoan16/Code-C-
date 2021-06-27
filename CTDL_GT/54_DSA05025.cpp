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
ll a[55];
void init(){
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for (int i=4; i<=55; i++){
        for (int j=1; j<=3; j++) a[i]+=a[i-j];
    }
    
}
void solve(){
    int n;
    cin >> n;
    cout << a[n];
    cout << endl;
}   

int main()
{
    faster();
    int t;
    cin >> t;
    init();
    while (t--) solve();
    return 0;
}




