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
    int n;
    n=max(s1.size(), s2.size());
    while (s1.size()<n) s1.insert(0, "0");
    while (s2.size()<n) s2.insert(0, "0");
    for (int i=0; i<n; i++){
        if (s2[i]!=s1[i]){
            if (s2[i]>s1[i]){
                swap(s1, s2);
            }
            break;
        }
    }
    for (int i=n-1; i>=0; i--){
        if (s1[i]<s2[i]+r){
            a[i]=s1[i]+10-s2[i]-r;
            r=1;
        }
        else {
            a[i]=s1[i]-s2[i]-r;
            r=0;
        }
    }
    for (int i=0; i<n; i++) cout << a[i];
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




