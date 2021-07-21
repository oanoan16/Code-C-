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

void solve(){
    int n, a[26]={0}, c=-1;
    string s;
    cin >> n;
    cin >> s;
    for (int i=0; i<s.size(); i++){
        a[s[i]-'A']++;
    }
    sort(a, a+26);
    int len=s.size();
    if (len>=a[25]*n-1) c=1;
    cout << c;
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
