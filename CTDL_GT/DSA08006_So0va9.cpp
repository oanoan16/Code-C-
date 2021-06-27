#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll bir(ll b){
    if (b==1) return 1;
    if (b%2==0) return 10*bir(b/2); 
    return 10*bir(b/2)+1;
}
void solve(){
    ll n, s=9, b=1;
    cin >> n;
    while (s%n!=0){
        b++;
        s=9*bir(b);
    }
    cout << s;
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


/*
 while(i>0 && s[i]<=s[i-1]) i--;
    if (i==0) cout << "BIGGEST";
    else{
        next_permutation(s.begin(), s.end());
        cout << s;
    }
    cout << endl;
*/