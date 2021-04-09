#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, a[25];
bool b[25] = {0};

void printf()
{
	for (int i = 1; i <= n; i++)
		cout << a[i];
	cout << endl;
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{	
		if (!b[j])
		{
			a[i] = j;
			b[j] = 1;	
			if (i == n)
				printf();
			else 
				Try(i+1);
			b[j] = 0;
		}	
	}	
}
int main()
{
	cin >> n;
	Try(1);
	return 0;
}

