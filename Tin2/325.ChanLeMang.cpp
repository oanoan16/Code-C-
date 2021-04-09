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
	int n, a[10000], c=0, d=0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
		if (a[i]&1) c++;
		else d++;
	}
	cout << c << " ";
	for (int i=0; i<n; i++) if (a[i]&1) cout << a[i] <<" ";
	cout << endl << d << " ";
	for (int i=0; i<n; i++) if (a[i]%2==0) cout << a[i] <<" ";	
	return 0;
}


