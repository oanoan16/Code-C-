#include <bits/stdc++.h>
using namespace std;

void Solve()
{
	int n,tmp;
	cin >> n;
	long long a[100000], b[100000] , s, maxs = 0, mins = 0;
	b[0] = 0;
	a[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		ns = max(a[i],ns);
		s += a[i];
		if (s<0) 
			s = 0;
		maxs = max(s,maxs);
	}

}
int main()
{
	int t;
	cin >> t;	
	while (t--)	Solve();
    return 0;
}
// cach 2
//	int n;
//	ll  a[100000], b[100000] , s, maxs = 0, minb = 0;
//	cin >> n;
//	b[0]=0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		b[i]=b[i-1]+a[i];
//		minb=min(minb,b[i]);
//		maxs=max(maxs,b[i]-minb);
//	}
//	cout << maxs << endl;

