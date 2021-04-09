#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll valmin(string s)
{
	ll sum=0;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i]=='6') sum=sum*10+5;
		else sum=sum*10+s[i]-48;
	}
	return sum;
}

ll valmax(string s)
{
	ll sum=0;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i]=='5') sum=sum*10+6;
		else sum=sum*10+s[i]-48;
	}
	return sum;
}

int main()
{
	faster();
	string a, b;
	cin >> a >> b;
	cout << valmin(a)+valmin(b) << " " << valmax(a)+valmax(b);	
	return 0;
}


