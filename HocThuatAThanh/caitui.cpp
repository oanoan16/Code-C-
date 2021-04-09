#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef pair <int, int> pii;

bool sortByVal(pii a, pii b)
{
	if (a.second==b.second)
		return (a.first<b.first);
	return (a.second > b.second);
}

int main()
{
	faster();
	int n,m,a,b,vmax=0;
	cin >> n >> m;
	vector <pii> vp;
	for (int i=0; i<n; i++)
	{
		cin >> a >> b;
		vp.push_back(make_pair(a,b));
	}	
	sort(vp.begin(), vp.end(), sortByVal);
	for (int i=0; i<n; i++)
	{
		int w=vp[i].first,v=vp[i].second;
		for (int j=i+1; j<n; j++)
			if (w+vp[j].first<=m)
			{
				w=w+vp[j].first;
				v=v+vp[j].second;
			}
		if (v>vmax)
			vmax=v;
	}
	cout << vmax << endl;	
	return 0;
}


