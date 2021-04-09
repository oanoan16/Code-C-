#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void insert(string &s1, string &s2)
{
	int maxL=max(s1.size(), s2.size())+1;
	while (s1.size()<maxL) s1.insert(0,"0");
	while (s2.size()<maxL) s2.insert(0,"0");	
}
int main()
{
	faster();
	int k, a[1000], r=0;
	string s1, s2;
	cin >> k >> s1 >> s2;
	insert(s1,s2);
	for (int i=s1.size()-1; i>=0; i--)
	{
		int c=s1[i]+s2[i]-48*2+r;
		if (c<k)
		{
			a[i]=c;
			r=0;
		}
		else
		{
			a[i]=c%k;
			r=1;
		}
	}
	for (int i=0; i<s1.size(); i++)
		if (i>0 || (i==0 && a[i]!=0)) 
			cout << a[i];	
	return 0;
}


