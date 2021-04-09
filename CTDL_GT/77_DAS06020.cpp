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
    int n, k, a[100005]={0},  c=-1;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i]==k) c=1;
    }
    cout <<c;
    cout <<endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}