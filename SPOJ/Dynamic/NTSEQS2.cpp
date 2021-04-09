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
	int n, s, a[205], b[205]={0};
	cin >> n >> s;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	b[0]=1;
	for (int i=1; i<=n; i++)
		for (int t=s; t>=a[i]; t--)
			if (b[t]==0 && b[t-a[i]]==1)
				b[t]=1;
	if (b[s]) cout << "YES";
	else cout << "NO";
	return 0;
}
