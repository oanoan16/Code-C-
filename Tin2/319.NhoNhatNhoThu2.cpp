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
	sort(a, a+n);
	int i=1;
	while (a[i]>a[i-1] && i<n){
		i++;
		break;
	}
	cout << a[0] << " " << a[i-1];
	return 0;
}


