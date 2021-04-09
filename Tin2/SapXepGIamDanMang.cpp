#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n,a[100000];
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);
	for (int i=n-1; i>=0; i--)
		cout << a[i] << " ";
	
	return 0;
}


