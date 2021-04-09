#include <bits/stdc++.h>
using namespace std;

void Solve()
{
	int n,count=0,i;
	cin >> n;
	set <int> s;
	if (n % 2 != 0)
		cout << 0 << endl;
	else
	{
		for (i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				if (i % 2 == 0)
					s.insert(i);
				if ((n/i) % 2 == 0 )
                    s.insert(n/i);
			}
		}
		cout << s.size() << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		Solve();
   return 0;
}

