#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int n, a[100], val;
 
int Find(int start,int end)
{
	if (start>=end)
		return 0;
	int k=(end+start)/2;
	if(val == a[k]) 
		return k;
	else if (val<a[k]) 
		return Find(start,k-1);
	return Find(k+1,end);
}
int main()
{
	faster();
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int len;
		cin >> len >> val;
		for (int j=1; j<=len; j++) 
			cin >> a[j];
		int c=0;
		c=Find(1,len);
		if (c==0)
			cout << "NO" << endl;
		else
			cout << c << endl;		
	}
}
