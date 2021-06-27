#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
int b[N];
void solve(){
    int n, c=0;
    cin >> n;
    int a[n];
    memset(b, 0, sizeof(b));
    for (int i=0; i<n; i++){
        cin >> a[i];
        b[a[i]]++;
        if (b[a[i]]==2){
            c+=2;
        }
        else if (b[a[i]]>2) c++;
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


