#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	string s;
	int c=0,t=0;
	getline(cin,s);
	for (int i=0; i<s.length(); i++)
	{
		if ((s[i]>='a' && s[i] <='z') || (s[i]>='A' && s[i]<='Z'))
			c++;
		else if (s[i]>='0' && s[i]<='9')
			t++;
	}
	cout << c << " " << t << " " << s.length()-c-t;	
	return 0;
}


