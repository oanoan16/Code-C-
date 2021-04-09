#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair <ll, ll> pll;
double minD;

struct point
{
	double x, y;
};
point a[100005];

// sap xep theo x
bool compX(point &a, point &b)
{
	return a.x < b.x;
}

// sap xep theo y
bool compY(point &a, point &b)
{
	return a.y < b.y;
}

// tinh cap nhat khoang cach nho nhat
void dist(struct point &a, struct point &b)
{
	double distance = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	if (distance < minD) minD = distance;
}

// chia de tri
void find(int l, int r)
{
	if (r <= l) return;
	if (l+1 == r)
	{
		dist(a[l], a[r]);
		if (!compY(a[l], a[r])) swap(a[l], a[r]);
		return;
	}
	int m = (l+r) / 2;
	int midx = a[m].x;
	find(l, m);
	find(m+1, r);
	static point tmp[100005];
	merge(a+l, a+m+1, a+m+1, a+r+1, tmp, compY);
	copy(tmp, tmp+r-l+1, a+l);
	int check=0;
	for (int i=l; i<=r; i++)
	{
		if (abs(a[i].x - midx) < minD)
		{
			for (int j=check-1; j>=0 && (tmp[j].y > a[i].y - minD); j--)
				dist(a[i], tmp[j]);
			tmp[check++] = a[i];
		}
	}
}

void solve()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i].x >> a[i].y;
	sort(a, a+n, compX);
	minD=DBL_MAX;
	find(0, n-1);
	printf("%.6f",minD);
	cout << endl;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();	
	return 0;
}


