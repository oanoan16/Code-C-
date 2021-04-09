#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int n, k, a[100005];

int find(int l, int r){
	if (l > r) return 0;
	int mid = (l+r)/2;
	if (k == a[mid]) return mid;
	else if (k < a[mid]) return find(l, mid-1);
	return find(mid+1, r);
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		for (int i=1; i<=n; i++)
			cin >> a[i];
		int c=0;
		c=find(1,n);
		if (c==0)
			cout << "NO" << endl;
		else
			cout << c << endl;		
	}
}

