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
	int a[100][100]={0}, n, x, y, xmax;;
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> x >> y;
		a[x][y]=1;
		a[y][x]=1;
		xmax=max(max(x, y), xmax);
	}
	for (int i=1; i<=xmax; i++)
	{
		for (int j=1; j<=xmax; j++)
			cout << a[i][j] <<" ";
		cout << endl; 
	}	
	return 0;
}


