#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;
ll l;
int find(ll k, int x) 
{
	l >>= 1;
	if (k<x) return k;
	if (k>l) return find(k-l-1,x);
	if (k==l) return find(k-1,x);
	return find(k,x);
}
int main()
{
	faster();
	ll n,i,j,k;
	string s;
	cin >> s >> n;
	n--;
	l=s.size();
	while (n>=l)
		l*=2;
	j=find(n,s.size());
	cout << s[j] << endl;	
	return 0;
}


