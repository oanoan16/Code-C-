#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int sumdigit(int n){
    int b=0;
    while (n>0){
        b+=n%10;
        n/=10;
    }
    return b;
} 

void solve(){
    string s;
    cin >> s;
    int sum=0, ans=1;
    for (auto c:s){
        sum+=(c-'0');
    }
    while (abs(sum)>9){
        ans++;
        sum=sumdigit(sum);
    }
    cout << ans << endl;
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}




