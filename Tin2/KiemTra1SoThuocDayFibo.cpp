#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
ll a[]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,
6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,
832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,
39088169,63245986,102334155,165580141,267914296,433494437,
701408733,1134903170,1836311903,2971215073,4807526976,7778742049,
12586269025,20365011074,32951280099};
int main()
{
	faster();
	ll n, c=0;
	cin >> n;
	for (int i=0; i<=25; i++)
		if (n==a[i]) c=1;
	cout << c;	
	return 0;
}


