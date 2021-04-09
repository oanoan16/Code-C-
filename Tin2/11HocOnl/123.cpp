#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	ll a, b;
	cin >> a >> b;
	while (a*b!=0){
		if (a>b) a%=b;
		else b%=a;
	}
	cout << a+b;
	return 0;
}


