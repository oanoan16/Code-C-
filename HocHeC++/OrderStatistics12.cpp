#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, k, c=0;
	cin >> n;
    int a[n+1]={0};
	for (int i=0; i<n; i++){
        cin >> k;
        if (k>0) a[++c]=k;
    }
    sort(a, a+c+1);
    int i=1, j=1;
    while (i<=c){
        if (a[i]!=j) break;
        else{
            i++;
            while (a[i]==j) i++;
        }
        j++;
    }
    cout << j << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}