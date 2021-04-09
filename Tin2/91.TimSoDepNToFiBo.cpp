#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int a[]={2,3,5,8,13,21,34,55,89,144,233};

bool prime(int x)
{
	if (x<2)
		return false ;
	for (int i=2; i<=sqrt(x); i++)
		if (x%i==0)
			return false;
	return true;
}

bool sumDiv(int x)
{
	int s=0,y;
	while (x>0)
	{
		y=x%10;
		s+=y;
		x/=10;
	}
	for (int i=0; i<=10; i++)
		if (s==a[i])
			return true;
	return false;
}

int main()
{
	faster();
	int a,b;
	cin >> a >> b;
	if (a>b)
		swap(a,b);
	for (int i=a; i<=b; i++)
		if (sumDiv(i) && prime(i))
			cout << i << " ";		
	return 0;
}


