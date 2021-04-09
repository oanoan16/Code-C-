#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s) && s != ".")
	{
	    stack <char> st;
		int c = 1;
		for (int i = 0; i < s.length(); i++)
		{
            if (s[i] == '(' || s[i] == '[')
			    st.push(s[i]);
			else if (s[i] == ')')
            {
                 if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                {
                    c = 0;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                {
                    c = 0;
                    break;
                }
            }
		}        
		if (st.empty() && c == 1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}	
   return 0;
}


