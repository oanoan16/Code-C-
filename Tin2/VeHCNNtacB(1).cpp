#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;

int main()
{
	faster();
	int a,b,n;
	cin >> a >> b;
	for (int i=1; i<=a; i++)
	{
		if (i>b)
			n=b;
		else
			n=i;
		for (int j=1; j<=b; j++)
			if (n<b)
			{
				cout <<n;
				n++;
			}
			else
				cout << b ;
		cout << endl;
	}
	return 0;
}


