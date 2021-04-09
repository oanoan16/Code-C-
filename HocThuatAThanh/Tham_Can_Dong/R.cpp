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
	int n, k;
	ll a[1005], f[1005][4]={0};
	cin >> n >> k;
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
		a[i]%=k;
	}
	
	for (int i=1; i<k; i++)	f[1][i]=-1e9;
	f[1][a[1]]=1;
	
	for (int i=2; i<=n; i++)
		for (int j=0; j<k; j++)
			f[i][j]=max(f[i-1][j], f[i-1][(j-a[i]+k)%k]+1);
	
	cout << f[n][0];	
	return 0;
}


