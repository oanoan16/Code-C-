#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
int b[1005];
int sumdigit(int n){
    int s=0;
    while (n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
void lucky(){
    for (int i=0; i<1005; i++){
        if (sumdigit(i)==9) b[i]=1;
    }
}

void solve(){
    string s;
    cin >> s;
    int c=0, sum=0;
    for (auto i:s){
        sum+=(i-'0');
    }
    if (sum==9 || b[sumdigit(sum)]==1) c=1;
    cout << c;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    lucky();
    while (t--) solve();
    return 0;
}


