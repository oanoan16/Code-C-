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
	cin >>n;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
			if (j<=i) cout << "*";
		cout << endl;
	}	
	
	return 0;
}


