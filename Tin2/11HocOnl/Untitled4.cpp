#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int main()
{
	faster();
	int a,b;
	ll s=0;
	cin >> a >> b;
	if (a>b) swap(a,b);
	for (int i=a; i<=b; i++)
		s+=i;
	cout << s;
	
	return 0;
}


