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
	int a[1005], t, n;
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	for (int i = 3; i <= 1000; i++){
		if (i & 1) a[i] = a[i-1];
		else a[i] = a[i-1] + a[i / 2];
	}
	cin >> t;
	for (int i = 1; i <= t; i++){
		cin >> n;
		cout << i << " " << a[n] << "\n";
	}
	
	return 0;
}


