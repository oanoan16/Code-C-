#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;
ull b;

ull mu(int a, int n){
	if (n==0)
		return 1;
	if (n==1)
		return a;
	if (n%2==0){
		ull r=mu(a, n/2);
		return (r*r);
	}
	return (mu(a,n-1)*a);		
}

int find(ull k, ull n){
	b /= 2;
	if (k==b) return n;
	if (k<b) return find(k,n-1);
	return find(k-b,n-1);
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		int n, a;
		ull k;
		cin >> n >> k;
		b=mu(2,n);
		a=find(k,n);
		cout << a << endl;
	}
	return 0;
}


