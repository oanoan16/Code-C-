#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++)
			if (i==1 || i==n || j==1 || j==m) cout << 1;
			else cout <<0;
		cout << endl;
	}
	return 0;
}


