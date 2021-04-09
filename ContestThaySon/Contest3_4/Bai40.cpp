#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int n, a[1005], c=0;

int find(int l, int r, int n){
	if (l>r || n<=0) return 0;
	int mid=(l+r)/2;
	if (a[mid]==0) return find(l, mid-1, n-(r-mid+1)) + (r-mid+1);
	return find(mid+1, r, n-(mid-l+1));	
}

void solve(){
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	c=find(1,n,n);
	cout << c << endl; 
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();	
	return 0;
}


