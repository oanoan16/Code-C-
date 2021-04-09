#include <bits/stdc++.h>

using namespace std;

struct ele
{
	int freq, index, val;
};

bool SortByVal(struct ele a, struct ele b)
{
	return (a.val < b.val);
}

bool SortByFreq(struct ele a, struct ele b)
{
	if (a.freq == b.freq)
		return (a.index > b.index);
	else
		return (a.freq < b.freq);
}

void Solve(int a[], int n)
{
	struct ele arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i].index = i;
		arr[i].freq = 0;
		arr[i].val = a[i];
	}
	stable_sort(arr, arr + n, SortByVal);
	arr[0].freq = 1;
	for (int i=1; i<n; i++)
	{
		if (arr[i].val==arr[i-1].val)
		{
			arr[i].freq += arr[i-1].freq + 1;
			arr[i-1].freq = -1;
			arr[i].index=arr[i-1].index;
		}
		else
			arr[i].freq = 1;
	}
	stable_sort(arr, arr + n, SortByFreq);
	for (int i = n - 1, index=0; i >= 0; i--)
		if (arr[i].freq != -1)
			for (int j = 0; j < arr[i].freq; j++)
				a[index++] = arr[i].val;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[100000],n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		Solve(a,n);
	}
}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef pair <int, int> ii;
//
//bool SortByFreq(ii a, ii b)
//{
//	return (a.first > b.first);
//}
//
//void Solve()
//{
//	vector <ii> vp;
//	int n = 0; 
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		bool kt = false;
//		for (int j = 0; j < vp.size(); j++)
//		{
//			if (vp[j].second == a)
//			{
//				kt = true;
//				vp[j].first++;
//				break;
//			}
//		}
//		if (kt == false)
//			vp.push_back(make_pair(1,a));
//		sort(vp.begin(), vp.end(), SortByFreq);
//	}
//	for (int i = 0; i < vp.size(); i++)
//		for (int j=0; j < vp[i].first; j++)
//			cout << vp[i].second << " ";
//	cout << endl;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//		Solve();
//	return 0;
//}
//



