#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 1000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, v;
    cin >> n ;
    int Min=1e9, Max=-1e9, c=0;
    vector <bool> a(100005, 0);
    for (int i=0; i<n; i++){
        cin >> v;
        if (!a[v]){
            a[v]=true;
            Max=max(v, Max);  
            Min=min(v, Min);
            c++;
        }
    }
    cout << Max-Min-c+1 <<  endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


