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
	string s1, s2, s="";
	cin >> s1;
	cin >> s2;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	int i=0, n=s1.size();
	while (s.size()<n)
	{
		s+=s1[i];
		if (s.size()<n)	s+=s2[n-i-1];
		++i;
	}
	cout << s;	
	return 0;
}


