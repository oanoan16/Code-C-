#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n,k,a[25];
bool check=1;
void printf()
{
	for (int i=1; i<=k; i++)
		cout << a[i] << " ";
	cout << endl;
}
void solve()
{
	int i=k;
	while (i>0 && a[i]==n-k+i)
		i--;
	if (i>0)
	{
		a[i]+=1;
		for (int j=i+1; j<=k; j++)
			a[j]=a[j-1]+1;
		printf();
	}
	else 
		check=0;	
}

int main()
{
	faster();
	cin >> n >> k;
	for (int i=1; i<=k; i++)
		a[i]=i;
	printf();
	while (check)
		solve();
	return 0;
}

