#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	string s1, s2;
    int a[1005]={0}, r=0;
    cin >> s1 >> s2;
    int n, m;
    n=s1.size();
    m=s2.size();
    n=max(n, m);
    n++;
    while (s1.size()<n) s1.insert(0, "0");
    while (s2.size()<n) s2.insert(0, "0");

    for (int i=n-1; i>=0; i--){
        int c=s1[i]+s2[i]-48*2+r;
        if (c>9){
            a[i]=c-10;
            r=1;
        }
        else {
            a[i]=c;
            r=0;
        }
    }
    if (a[0]!=0) cout << a[0];
    for (int i=1; i<n; i++) cout << a[i];
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




