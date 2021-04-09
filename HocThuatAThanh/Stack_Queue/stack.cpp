#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack <int> st;
	string s; 
	while (1)
	{
		cin >> s;
		if (s == "init")
		{
			while (!st.empty())
			{
				st.pop();
			}
		}
		if (s == "push")
		{
			int x;
			cin >> x;
			st.push(x);
		}
		if (s == "pop" && !st.empty())
			st.pop();
		if (s == "top")
		{
			if (!st.empty())
				cout <<	st.top() << endl;
			else
				cout << -1 << endl;
		}
		if (s == "size")
			cout << st.size() << endl;
		if (s == "empty")
		{
			if (st.empty())
				cout << 1 << endl;
			else 
				cout << 0 << endl;
		}
		if (s == "end")
			break;
	}
   return 0;
}

