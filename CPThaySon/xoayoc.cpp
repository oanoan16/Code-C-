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

void solve(){
    int n;
    cin >> n;
    int a[n][n];
    int k=0, r=n-1, c=n-1, start=0;
    while(k<n*n){
        for (int i=start; i<=c; ++i) a[start][i]=++k;
        for (int i=start+1; i<=r; ++i) a[i][c]=++k;
        for (int i=c-1; i>=start; --i) a[r][i]=++k;
        for (int i=r-1; i>start; --i) a[i][start]=++k;
        start++; r--; c--;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
 
int main(){
	faster();
    solve();
	return 0;
}
 