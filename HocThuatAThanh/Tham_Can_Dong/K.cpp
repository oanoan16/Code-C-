#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int c, n, a[30], s=0, ans=0;

void Try(int x, int s){
	if (s>c) return;
	if (x==n+1){
		if (ans<s) ans=s;
		return;
	}
	Try(x+1, s);
	Try(x+1, s+a[x]);
}

int main(){
	faster();
	cin >> c >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	sort(a+1, a+n);	
	Try(1, 0);
	cout << ans;
	return 0;
}


