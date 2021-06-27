#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n;
    cin >> n;
    int a[100]={0};
    int res=0, c=0;
    for (int i=1; i<=sqrt(n); i++){
        if (n%i==0){
            if (i*i==n) c++;
            else c+=2;
        }
        if (c>8) break;
    }
    if (c==8){
        int cnt=-1;
        for (int i=2; i<=sqrt(n); i++){
            if (n%i==0){
                while (n%i==0){
                    a[++cnt]=i;
                    n/=i;
                }
            }
            if (cnt>3) break;
        }
        if (a[0]!=a[1] && a[1]!=a[2]) res=1;
    }
    cout << res;
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}