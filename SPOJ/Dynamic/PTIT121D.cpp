#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int n, a[30], t;

int find(int k, int n){
	if (k == 0){
		if (n == 1) return 1;
		else return 0;
	}
	int x = a[k - 1];
	if (n <= x) return(find(k - 1, n));
	if (n == x + 1) return 1;
	if ((n > x + 1) && (n <= x + k + 3)) return 0;
	return find(k - 1, n - x - k - 3); 
}

int main()
{
	faster();
	ll n;
	cin >> n;
	t  = 0;
	a[0] = 3;
	do {
		++t;
		a[t] = a[t - 1]*2 + (t +3);
	}
	while (a[t] < n);
	find(t, n) ? cout << "m" : cout << "o";
	
	return 0;
}


