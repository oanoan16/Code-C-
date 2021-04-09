#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
	int n, a[25]={0};
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	int i=0;
	while (a[i]==0) ++i;
	ull s1=0, s2=0;
	while (i<n)
	{
		s1=s1*10+a[i];
		if (i+1<n) s2=s2*10+a[i+1];
		i+=2;
	}
	cout << s1+s2 << endl;	
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();	
	return 0;
}


