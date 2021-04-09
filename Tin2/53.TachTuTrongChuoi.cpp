#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	string s;
	stringstream ss;
	getline(cin,s);
	int c=0;
	ss << s;
	while (ss >> s)
		cout << s << endl;	
	return 0;
}


