#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	faster();
	int n;
	ull a=0, b=1, c=0;
	cin >> n;
	if (n==0) cout << 0;
	else if (n==1) cout << 1;
	else{
		int i=2;
		while(i<=n){
			c=a+b;
			a=b;
			b=c;
			i++;
		}
		cout << c;
	}
	return 0;
}


