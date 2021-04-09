#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

bool prime(int x)
{
	if (x<2)
		return false ;
	for (int i=2; i<=sqrt(x); i++)
		if (x%i==0)
			return false;
	return true;
}

bool check(int x)
{
	int a=x%10;
	while (x>0)
	{
		int y=x%10;
		if (y>a) return false;
		x/=10;
	}
	return true;
}

int main()
{
	faster();
	int n,c=0;
	cin >> n;
	if (n>2)
	{
		for (int i=2; i<=n; i++)
			if (prime(i) && check(i))
			{
				c++;
				cout << i <<" ";
			}
		cout << endl;
	}
	cout << c;
	return 0;
}


