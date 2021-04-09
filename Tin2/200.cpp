#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int sum(int n){
	int k=0;
	while (n>0){
		k+=(n%10);
		n/=10;
	}
	return k;
}
int main()
{
	faster();
	int a, b;
	cin >> a >> b;
	if (sum(a)>sum(b)) cout << b << " " << a;
	else cout << a << " " << b;
	
	return 0;
}


