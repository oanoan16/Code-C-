#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef unsigned long long ull;
// Luy Thua

ull mu(ull a, ull n){
	if (n==0)
		return 1;
	if (n==1)
		return a;
	if (n%2==0){
		ull r=mu(a, n/2)%1000000007;
		return (r*r)%1000000007;
	}
	return (mu(a,n-1)*a)%1000000007;		
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		ull a, b;
		cin >> a >> b;
		if (a==0 && b==0)
			break;
		else
			cout << mu(a,b)%1000000007 << endl;		
	}
	return 0;
}

	
