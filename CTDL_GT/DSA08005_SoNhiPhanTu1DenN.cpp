#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

string decToBin(int n){
    string bin="";
    while (n){
        bin=char(n%2+'0')+bin;
        n>>=1;
    }
    return bin;
}

void solve(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) cout << decToBin(i) << " ";
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


