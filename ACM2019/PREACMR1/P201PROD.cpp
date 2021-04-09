#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		string s="";
		int d8=n/4;
		if (n%4!=0) d8++;
		for (int i=0; i<(n-d8); i++)
			s+='9';
		for (int i=0; i<d8; i++)
			s+='8';
		cout << s << endl;
	}
	return 0;
}


