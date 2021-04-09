#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void dq(int n){
	if (n==1) return;
	cout << n-1 << " ";
	dq(n-1);
}

int main()
{
	faster();
	int n;
	cin >> n;
	dq(n); 	
	return 0;
}


