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
	int n, a[10000];
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=n-1; i>=0; i--)
		cout << a[i] << " ";
	return 0;
}


