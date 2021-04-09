#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int check(int n){
	int m=n, k=0, s=0, t=0;
	while (m>0){
		k=m%10;
		s+=k;
		t=t*10+k;
		m/=10;
	}
	if (s%10==0 && t==n) return 1;
	else return 0;
}

int main()
{
	faster();
	int n, c=0, a=1;
	cin >> n;
	if (n>2) return 0;
	
		for (int i=1; i<=n; ++i) a*=10;
		for (int i=a/10; i<a; i++)
		if (check(i)==1) c++;
	
	cout << c;
	return 0;
}


