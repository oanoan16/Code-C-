#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, a[20], ans[20];
string s;

void print(){
    for (int i=1; i<=n; i++) cout << s[ans[i]];
    cout << " ";
}

void Try(int i){
    for (int j=1; j<=n; j++){
        if (!a[j]){
            a[j]=1;
            ans[i]=j;
            if (i==n) print();
            else Try(i+1);
            a[j]=0;
        }
    }
}

void solve(){
    cin >> s;
    n=s.size();
    s='0'+s;
    memset(a, 0, sizeof(a));
    Try(1);
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


