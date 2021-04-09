#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 105
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll a[N][N];

void solve(){
    int n, maxS=0, ans=0;
    cin >> n;
    int sumR[n], sumC[n];
    memset(sumR, 0, sizeof(sumR));
    memset(sumC, 0, sizeof(sumC));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
            sumR[i] += a[i][j];
            sumC[j] += a[i][j];
        }
    }
    for (int i=0; i<n; i++){
        maxS= max(maxS, max(sumR[i], sumC[i]));
    }
    for (int i=0, j=0; i<n && j<n;){
        int tmp = min(maxS-sumR[i], maxS-sumC[j]);
        a[i][j]+=tmp;
        sumR[i]+=tmp;
        sumC[j]+=tmp;
        ans+=tmp;
        if (sumR[i]==maxS) i++;
        if (sumC[j]==maxS) j++;
    }
    cout << ans << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 