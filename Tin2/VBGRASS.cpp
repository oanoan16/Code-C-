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
	char a[105][105];
	int n, m, c=0;
	cin >> n >> m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];
			
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (a[i][j]=='#'){
				c++;
				if (i<n-1 && a[i+1][j]=='#') a[i+1][j]='.';
				if (a[i][j+1]=='#') a[i][j+1]='.';
				else if (a[i][j+1]=='#') a[i][j+1]='.';			}
		}
	}
	cout << c;	
	return 0;
}


