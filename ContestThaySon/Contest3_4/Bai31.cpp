#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  N 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
ull n, k;

struct matrix
{
	ull a[15][15];
	matrix()
	{
		memset(a, sizeof(a), 0);
	}
};

matrix operator *(matrix b, matrix c)
{
	matrix m;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
		{
			m.a[i][j]=0;
			for (int k=0; k<n; k++)
				m.a[i][j] = (m.a[i][j] + (b.a[i][k]*c.a[k][j])%N)%N;
		}
	return m;
}

matrix find(matrix m, ull k)
{
	if (k==1)	return m;
	if (k%2!=0) return find(m,k-1)*m;
	matrix r=find(m,k/2);
	return r*r;
}
void solve()
{
	cin >> n >> k;
	matrix m;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin >> m.a[i][j];
	m=find(m, k);
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			cout << m.a[i][j] << " ";
		cout << endl;		
	}	
}
int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
		solve();	
	return 0;
}


