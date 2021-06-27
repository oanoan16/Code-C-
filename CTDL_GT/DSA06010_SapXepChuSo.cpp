#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, a[10]={0};
    string s;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    for (int i=0; i<s.size(); i++){
        int j=s[i]-'0';
        if (j >=0 & j<=9) a[j]=1;
    }
    for (int i=0; i<10; i++){
        if (a[i]) cout << i << " ";
    }
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


