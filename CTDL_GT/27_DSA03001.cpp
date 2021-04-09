#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[10]={1,2,5,10,20,50,100,200,500,1000}, t,n,m;

void solve(){
    int n, c, m;
    cin >> n;
    c=0;
    for (int i=9; i>=0; i--){
        if(n>=a[i]){
            m=n/a[i];
            c+=n/a[i];
            n-=m*a[i];
        }
    }
    cout << c << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


