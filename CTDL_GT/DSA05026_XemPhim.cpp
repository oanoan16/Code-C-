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
int a[105], f[25005];
void solve(){
    int C, n;
    cin >>  C >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    f[0]=1;
    for (int i=1; i<=n; i++){
        for (int j=C; j>=a[i]; j--){
            if (f[j-a[i]]==1) f[j]=1;
        }
    }
    for (int i=C; i>=0; i--){
        if (f[i]){
            cout << i;
            return;
        }
    }
    cout << endl;
}   

int main()
{
    faster();
    solve();
    return 0;
}




