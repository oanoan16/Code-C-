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
	int n, a, b, c;
	a=0; 
	b=1;
	cin >> n;
	if (n==1) cout <<  0 ;
	else
	{
		cout << 0 << " " << 1 << " ";
		if (n>2)
		{
			n-=2;
			while(n--)
			{
				c=a+b;
				a=b;
				b=c;
				cout << c << " ";
			}
		}
	}
	
	return 0;
}


