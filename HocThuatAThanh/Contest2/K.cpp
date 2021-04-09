#include <bits/stdc++.h>
using namespace std;

//bool check(int *a,int *b, int n)
//{
//	for (int i=0; i<n; i++)
//		if (a[i]>b[i])
//			return 0;
//	return 1;			
//}
int main()
{
	int n,c=1,a[105],b[105];
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);
	for (int i=0; i<n; i++)
		cin >> b[i];
	sort(b,b+n);
	for (int i=0; i<n; i++)
		if (a[i]>b[i])
		{
			c=0;
			break;
		}
	if (c==1) cout << "YES" << endl;
	else cout << "NO" <<endl;
   return 0;
}

