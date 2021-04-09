#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, k, a[15][15],b[100][100],tmp[15],c=0, dem;

bool check(int y, int m)
{
	for (int h=1; h<=y; h++)
	{
		if (tmp[h]==m)
			return false;
	}
	return true;
}

void Try(int i)
{
	for (int j=1; j<=n; j++)
	{
		if (check(i,j))
		{
			tmp[i]=j;
			c+=a[i][j];
			if (i==n)
			{
				if (c==k)
				{
					dem++;
					for (int z=1; z<=n; z++)
						b[dem][z]=tmp[z];
				}
			}
			else 
				Try(i+1);			
			c-=a[i][j];	
			tmp[i]=0;
		}
	}
}
int main()
{
	faster();
	cin >> n >> k;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			cin >> a[i][j];
	Try(1);
	cout << dem << endl;
	for (int i=1; i<=dem; i++)
	{
		for (int j=1; j<=n; j++)
			cout << b[i][j] <<  " ";
		cout << endl;
	}	
	return 0;
}


