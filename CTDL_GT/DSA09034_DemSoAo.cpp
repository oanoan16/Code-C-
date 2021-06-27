#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
 
char a[105][105];
int x[]={1, 1, 0, -1, -1, -1, 0, 1};
int y[]={0, -1, -1, -1, 0, 1, 1, 1};
int n, m, c;
 
void dfs(int i, int j){
	for (int k=0; k<8; k++){
		int r=i+x[k];
		int c=j+y[k];
		if ((r>=1 && r<=n) && (c>=1 && c<=m) && a[r][c]=='W'){
			a[r][c]='.';
			dfs(r, c);
		}
	}
}
 
int main()
{
	faster();
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin >> a[i][j];
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (a[i][j]=='W'){
				c++;
				a[i][j]='.';
				dfs(i, j);
			}
		}
	}
	cout << c;	
	return 0;
}
 