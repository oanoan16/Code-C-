#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N];

void solve(){
    int n, k, c=0, ans=0, check=0;
    cin >> n >> k;

    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i]<=k) c++;
    }
    
    for (int i=0; i<c; i++){
        if (a[i]>k) check++;
    }
    ans=check;
    for (int i=0, j=c; j<n; j++, i++){
        if (a[i]>k) check--;
        if (a[j]>k) check++;
        ans = min(check, ans);
    }
    cout << ans <<  endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 