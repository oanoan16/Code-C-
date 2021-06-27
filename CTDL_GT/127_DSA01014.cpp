#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, k, a[25], s, sum, c;

void Try(int x){
    if (sum>s) return;
    for (int i=a[x-1]+1; i<=n; i++){
        a[x]=i;
        sum+=i;
        if (x==k){
            if (sum==s) c++;
        }
        else Try(x+1);
        sum-=i;
    }
}

void solve(){
    while (1){
        cin >> n >> k >> s;
        if (n==0 && k==0 && s==0){
            return;
        }
        else {
            a[0]=0;
            sum=0;
            c=0;
            Try(1);
            cout << c << endl;
        }
    }
}

int main(){
    faster();
    solve();
    return 0;
}