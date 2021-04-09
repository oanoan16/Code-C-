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
	int n, c=0;
	cin >> n;
	if ((n%4==0 && n%100!=0) || (n%400==0))
		c=1;
	cout << c;
	
	return 0;
}


