#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void fibo(int n){
	if (n==0) return;
	fibo(n-1);
	cout << n -1 << " ";
	
}
int main()
{
	faster();
	int n;
	cin >> n;
	fibo(n);
	
	
	return 0;
}


