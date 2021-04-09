#include <bits/stdc++.h>
using namespace std;
int main()
{
	queue <int> q;
	int n;
	cin >> n;
	while (n--)
	{
		int t;
		cin >> t;
		if (t==1)
			cout<< q.size() << endl;
		if (t==2)
		{
			if (!q.empty())
				cout << "NO"<< endl;
			else 
				cout << "YES" << endl;
		}
		if (t==3)
		{
			int x;
			cin >> x;
			q.push(x);
		}
		if (t==4)
		{
			if (!q.empty())
				q.pop();
		}
		if (t==5)
		{
			if (!q.empty())
				cout << q.front() << endl;
			else 
				cout << -1 << endl;
		}
		if (t==6)
		{
			if (!q.empty())
				cout << q.back() << endl;
			else 
				cout << -1 << endl;
		}
	}


   return 0;
}

