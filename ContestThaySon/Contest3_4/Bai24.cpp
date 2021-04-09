#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;
ull N=123456789;

ull mu(ull a){
	if (a==0)
		return 1;
	if (a==1)
		return 2;
	if (a%2==0){
		ull r=mu(a/2)%N;
		return r*r%N;
	}
	return (mu(a-1)*2)%N;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		ull n;
		cin >> n;
		cout << mu(n-1)%N << endl;
	}
	return 0;
}


