#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t, a[10][10], bc[10][10], Cmax=0, c=0, tmp;

bool check(int row, int col)
{
	int i,j;
	for (i = 1; i <=row; i++)
		if (bc[i][col]) 
			return false;
	for (i = row, j = col; i > 0 && j > 0; i--, j--)
		if (bc[i][j]) 
			return false;
	for (i = row, j = col; i >0  && j <= 8; i--, j++)
		if (bc[i][j])
			return false;
	return true;
}

void Try(int x)
{
	for (int i=1; i<=8; i++)
	{
		if (check(x,i))
		{
			c+=a[x][i];
			bc[x][i]=1;
			if (x==8)
			{
				if (c>Cmax)
					Cmax=c;
			}
			else 
				Try(x+1);
			bc[x][i]=0;
			c-=a[x][i];
		}
	}
}

void solve()
{
	for (int i=1; i<=8; i++)
		for (int j=1; j<=8; j++)
			cin >> a[i][j];
	Try(1);
	cout << Cmax << endl;
}

int main()
{
	faster();
	cin >> t;
	while (t--)
	{
		Cmax=0;
		c=0;
		solve();		
	}		
	return 0;
}


