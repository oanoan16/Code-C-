#include <bits/stdc++.h>
using namespace std;

void Solve()
{
	string s;
	cin >> s;
	int l;
	l=s.length();
	int a[l], sum=0;
	for (int i = 0 ; i < l; i++)
	{
		if (s[i] == 'I')
			a[i] = 1;
		else 
			if (s[i] == 'V')
				a[i] = 5;
			else
				if (s[i] == 'X')
					a[i] = 10;
				else
					if (s[i] == 'L')
						a[i] = 50;
					else
						if (s[i] == 'C')
							a[i] = 100;
						else
							if (s[i] == 'D')
								a[i] = 500;
							else
								if (s[i] == 'M')
									a[i] = 1000;
	}
	sum = a[l - 1];
	for (int i = l - 1; i > 0; i--)
	{
		if (a[i] > a[i - 1])
			sum = sum - a[i - 1];
		else
			sum = sum + a[i - 1];
	}
	cout << sum << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		Solve();
	return 0;
}
