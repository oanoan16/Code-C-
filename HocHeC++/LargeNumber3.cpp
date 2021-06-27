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
    cin >> s1 >> s2;
    int n, m, c=1, a, b, r, mul, is1=0, is2;
    n=s1.size();
    m=s2.size();
    if (n==0 || m==0) c=0;
    vector <int> ans(n+m, 0);
    for (int i=n-1; i>=0; i--){
        r=0;
        a=s1[i]-'0';
        is2=0;
        for (int j=m-1; j>=0; j--){
            b=s2[j]-'0';
            mul=a*b+r+ans[is1+is2];
            r=mul/10;
            ans[is1+is2]=mul%10;
            is2++;
        }
        if (r>0) ans[is1+is2]+=r;
        is1++;
    }
    int len=ans.size()-1;
    while (len>=0 && ans[len]==0) len--;
    if (len==-1) c=0;
    if (c==0) cout << 0;
    else {
        for (int i=len; i>=0; i--) cout <<ans[i];
    }
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




