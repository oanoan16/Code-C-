#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, a[20][20], check[100], gk = 1e9, cost = 0, g = 1e9, Cmin=0, x[100], s;
int dd[100];
void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if (Cmin > a[i][j] && a[i][j] != 0)
				Cmin = a[i][j];
		}		
	}
	x[1] = 1;
	dd[1]=1;
}

void BaB(int k)
{
	for (int i = 2; i <= n; i++)
	{
		if (!check[i])
		{
			x[k] = i;
			check[i]++;
			cost += a[x[k - 1]][x[k]];
			gk = cost + (n - k + 1)*Cmin;
			if (k == n && gk < g)
			{
				g = gk;
				s = cost + a[x[k]][1];
			//	for (int h=1; h<=n; h++)
			//		dd[h]=x[h];             in ra duong di
			}	
			else if (gk < g)
				BaB(k + 1);
			check[i]--;
			cost -= a[x[k - 1]][x[k]];			
		}
	}
}

int main()
{
	faster();
	input();
	BaB(2);
	cout << s << endl;
//	for (int i=1; i<=n; i++)     in duong di
//		cout << dd[i] <<  " ";	
}

























//int n, a[20][20], x[100], Cmin=1e9, g=1e9, daxet[100], kq, cp=0;
//
//void init()
//{
//	cin >> n;
//	for (int i=1; i<=n; i++)
//	{
//		for (int j=1; j<=n; j++)
//		{
//			cin >> a[i][j];
//			if (Cmin>a[i][j] && a[i][j]!=0)
//				Cmin=a[i][j];
//		}
//	}
//	x[1]=1;
//}
//
//void  nhanhCan(int k)
//{
//	for (int i=2; i<=n; i++)
//	{
//		if (!daxet[i])
//		{
//			x[k]=i;
//			daxet[i]++;
//			cp+=a[x[k-1]][x[k]];
//			int gk=cp+(n-k+1)*Cmin;
//			if (k==n && gk<g)
//			{
//				g=gk;
//				kq=cp+a[x[k]][x[1]];;
//			}
//			else if (gk<g) 
//				nhanhCan(k+1);
//			daxet[i]--; 
//			cp -= a[x[k-1]][x[k]];
//		}
//	}
//}
//int main()
//{
//	faster();
//	init();
//	nhanhCan(2);
//	cout << kq;
//	return 0;
//}


