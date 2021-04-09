#include <bits/stdc++.h>
using namespace std;

int priority(char c)
{
	if (c == '+' || c == '-')
		return 1;
	else if (c == '*' || c == '/')
		return 2;
	else if (c == '^')
		return 3;
	return 0;
}

void solve()
{
	stack <char> st;
	string s, op = "";
	char c;
	getline(cin,s);
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') ||( s[i] >= 'A' && s[i] <= 'Z'))
			op += s[i];
		else if (s[i] == '(')
		{
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{
			while (!st.empty() && st.top() != '(')
			{
				c = st.top();
				st.pop();
				op += c;
			}
			if (st.top() == '(')
				st.pop();
		}
		else
		{
			while (!st.empty() && (priority(s[i]) <= priority(st.top())))
			{
				c = st.top();
				st.pop();
				op += c;
			}
			st.push(s[i]);
		}
	}
	while (!st.empty())
    {
        c = st.top();
        st.pop();
        op += c;
    }
	cout << op << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	string s;
	getline(cin,s);
	while (t--)
		solve();
   return 0;
}

