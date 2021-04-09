#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	stack <char> st;
	int d=0;
	getline(cin, s);
	if (s[0]==')') 
	{
		d++;
		s[0]='(';
	}
	if (s[s.length()-1]=='(' )
	{
		s[s.length()-1]=')';
		d++;
	}
	for (int i=0; i<s.length(); i++)
	{
		if (s[i]=='(')
			st.push(s[i]);
		else 
		{
			if (st.empty())
			{
				s[i]='(';
				d++;
				st.push(s[i]);
			}
			else 
				if (st.top()=='(') 
					st.pop();
		}
	}
	cout<< d + (st.size()/2)<<endl;
   return 0;
}

