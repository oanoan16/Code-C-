#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
int n, S, a[35], res=35;
ll s;
void Try(int x, int s, int d)
{
	if (s > S || d > res)
		return;
	if (x==n+1)
	{
		if (s==S)
			res=min(res,d);
		return;
	}
	Try(x+1,s,d);
	Try(x+1,s+a[x],d+1);
}
int main()
{
	faster();
	cin >> n >> S;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	res=35;
	s=0;
	Try(0,s,0);
	if (res==35)
		cout << -1 << endl;
	else
		cout << res;	
	return 0;
}


