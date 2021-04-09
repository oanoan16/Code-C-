#include <bits/stdc++.h>

using namespace std;

int priority(char c)
{
	if (c == '+' || c == '-')
		return 1;
	else if (c == '*' || c == '/')
		return 2;
	return 0;
}

long long cal(long long a, long long b, char c)
{
	switch(c)
	{
		case '+': return a + b;
		case '-': return b - a;
		case '*': return a * b;
		case '/': return b / a;
	}
}
void solve()
{
	stack <long long> vs;
	stack <char> os;
	string s;
	getline(cin, s);
	long long r=0, tmp = 0, a, b;
	char c;
	for (int i=0; i < s.length(); i++)
	{
	    if (s[i] == '(')
            os.push(s[i]);  
		else if (s[i] <= '9' && s[i] >= '0')
		{
		    string str="";
			while (s[i] <= '9' && s[i] >= '0' && i < s.length())
			{
                str.push_back(s[i]);
                i++;
			}
			stringstream ss;
			ss << str;
			ss >> tmp;
			vs.push(tmp);
            i--;
		}
		else if (s[i] == ')')
		{
			while (!os.empty() && os.top() != '(')
			{
				c = os.top();
				os.pop();
				a = vs.top();
				vs.pop();
				b = vs.top();
				vs.pop();
				r=cal(a,b,c);
				vs.push(cal(a,b,c));
			}
			if (os.top() == '(')
				os.pop();
		}
		else if (s[i] =='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
		{
			while (!os.empty() && (priority(s[i]) <= priority(os.top())))
			{
				c = os.top();
				os.pop();
				a = vs.top();
				vs.pop();
				b = vs.top();
				vs.pop();
				r=cal(a,b,c);
				vs.push(cal(a,b,c));
			}
			os.push(s[i]);
		}
	}
	while (!os.empty())
	{
		c = os.top();
		os.pop();
		a = vs.top();
		vs.pop();
		b = vs.top();
		vs.pop();
		vs.push(cal(a,b,c));
		r=cal(a,b,c);
	}
	cout << vs.top() << endl;
}

int main()
{
	int t;
	cin >> t;
	string s;
	getline(cin, s);
	while (t--)
		solve();
	return 0;
}

