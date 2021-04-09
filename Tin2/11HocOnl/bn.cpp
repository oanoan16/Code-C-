#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define EVEN 0
#define ODD 1
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int n,m, a[100][100];
	cin >> n >> m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];
	for (int i=0; i<m; i++){
		for(int j=0; j<2; j++)
			cout << a[n-j-1][i] << " ";
		cout << endl;
	}
 


	
	return 0;
}


