#include <bits/stdc++.h>
using namespace std;

void Solve(int n)
{
	int  i = 0,a;
	a = (n*(n-1))/2;
	string s1,s2,s;
	cin >> s1;
	cin >> s2;
	cin >> s;
	while (i < a )
	{
		i++;
		string str="";
		for (int i = 0;  i < s1.length(); i++)
		{
			str.push_back(s2[i]);
			str.push_back(s1[i]);
		}
		if (str.compare(s) == 0)
		{
			cout << i << endl;
			break;
		}
		else
		{
			s1.replace(0,n,str,0,n);
			s2.replace(0,n,str,n,n);
		}
	}
	if (i == a )
		cout << -1 << endl;
}
int main()
{
	int n;
	while (1)
	{
		cin >> n;
		if (n==0)
			break;
		else		
			Solve(n);
	}
   return 0;
}

