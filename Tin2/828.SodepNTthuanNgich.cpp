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

int main()
{
	faster();
	int a,b,c=0;
	cin >> a >> b;
	if (a>b)	
		swap(a,b);
	for (int i=a; i<=b; i++)
		if (prime(i) && prime(sumDiv(i)) && i!=sumDiv(i))
			cout << i << " ";		
	return 0;
}


