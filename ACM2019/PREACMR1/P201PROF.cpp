#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ull gcd(ull a, ull b){
	if (b==0) return a;
	return gcd(b, a%b);
}

int main()
{
	faster();
	ull n, k, p;
	cin >> n >> k;
	p=pow(10, k);
	cout << n*p/gcd(n, p);	
	return 0;
}


