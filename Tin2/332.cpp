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
	int n;
	char c, a;
	cin >> n;
	for (int i=1; i<=n; i++){
		c=65+(i-1)*2;
		for (int j=1; j<=(n-i+1); j++){
			a=c+(j-1)*2;
			cout << a;
		}
		cout << endl;
	}
	return 0;
}


