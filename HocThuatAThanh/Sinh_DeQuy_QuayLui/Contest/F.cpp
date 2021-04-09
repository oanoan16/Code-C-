#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int bc[100][100], d=0, vt[100], n; 

bool check(int row, int col){
	int i,j;
	for (i = 1; i <=row; i++)
		if (bc[i][col]) 
			return false;
	for (i = row, j = col; i>0 && j>0; i--, j--)
		if (bc[i][j]) 
			return false;
	for (i = row, j = col; i > 0 && j <= n; i--, j++)
		if (bc[i][j])
			return false;
	return true;
}

void backTrack(int i)
{
	for (int j = 1; j <= n; j++){
		if (check(i,j)) 
		{
			bc[i][j] = 1;
			vt[i] = j;
			if (i == n)
				d++;
			else
				backTrack(i + 1);
			bc[i][j] = 0;
		} 
	}
}
int main()
{
	faster();
	cin >> n;
	backTrack(1);
	cout << d << endl;
	return 0;
}


