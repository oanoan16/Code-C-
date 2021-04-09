#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	string s1,s2;
	int n;
	getline(cin,s1);
	getline(cin,s2);
	cin>>n;
	s1.insert(n-1,s2);
	cout << s1;
	
	return 0;
}


