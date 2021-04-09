#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int sumDiv(int x)
{
	int s=0,y;
	while (x>0)
	{
		y=x%10;
		s=s*10+y;
		x/=10;
	}
	return s;
}

int primeDiv(int x)
{
	int c=0,i=2;
	while (x>1)
	{
		if (x%i==0)
		{
			c++;
			while (x%i==0)
				x/=i;
		}
		i++;
	}
	return c;
}
int main()
{
	faster();
	int a,b,c=0;
	cin >> a >> b;
	if (a>b)
		swap(a,b);
	for (int i=a; i<=b; i++)
		if (i==sumDiv(i) && (primeDiv(i)>=3))	
			cout << i << " ";
	return 0;
}


