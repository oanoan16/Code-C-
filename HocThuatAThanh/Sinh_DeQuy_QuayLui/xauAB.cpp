#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n,k,dem=0;
char s[1000];
vector <string> vs;

void printf()
{
	for (int i = 1; i <= n; i++)
		cout << s[i];
	cout << endl;
}

bool check()
{
	int c=0, t=0;
	for (int i=1; i<=n; i++)
	{
		if (s[i]=='A')
		{
			c++;
			if (c>=k)
				t++;
		}
		else
			c=0;
	}
	if (t==1)
		return 1;
	else 
		return 0;
}

void Try(int x)
{

	for (int i='A'; i<='B'; i++)
	{
 		s[x]=i;
		if (x==n)
		{
			if (x==n && check())
			{
				string str="";
				dem++;
				for (int i=1; i<=n; i++)
					str+=s[i];
				vs.push_back(str);
			}
		}
		else
            Try(x+1);
	}
}

int main()
{
	faster();
	cin >> n >> k;
	Try(1);
	cout << dem << endl;
	for (int i=0; i<vs.size(); i++)
		cout << vs[i] << endl;
	
	return 0;
}


