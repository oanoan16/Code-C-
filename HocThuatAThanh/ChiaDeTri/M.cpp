#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;
ull N=1e9+7;

ull mu(ull a)
{
	if (a==0)
		return 1;
	if (a==1)
		return 3;
	if (a%2==0)
	{
		ull r=mu(a/2)%N;
		return r*r%N;
	}
	return (mu(a-1)*3)%N;
}

int main()
{
	faster();
	ull n;
	cin >> n;
	cout << mu(n-1);
	return 0;
}


