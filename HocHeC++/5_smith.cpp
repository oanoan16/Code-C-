#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int sumd(int x){
    int c=0;
    while (x>0){
        c+=(x%10);
        x/=10;
    }
    return c;
}
void solve(){
    ll n, t;
    int i=2;
    cin >> n;
    t=n;
    int s=0, sd=0;
    while (n>1){
        if (n%i==0){
            int c=0;
            while (n>1 && n%i==0){
                n/=i;
                c++;
            }
            s+=sumd(i)*c;
        }
        i++;
    }

    while (t>0){
        sd+=(t%10);
        t/=10;
    }
    if (s==sd) cout << "YES";
    else cout << "NO";
}

int main(){
    faster();
 //   int t;
//    prime();
//    cin >> t;
//    while (t--) 
    solve();
    return 0;
}


