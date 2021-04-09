#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t,n; 
void Try(string s)
{
	if (s.size()==n)
		cout << s << " ";
	else 
	{
		Try(s+'A');
		Try(s+'B');
	}
	
}

void solve()
{
	cin >> n;
	Try("");
	cout << endl;
}

int main()
{
	faster();
	cin >> t;
	while (t--)
		solve();	
	return 0;
}

//#include <bits/stdc++.h>
//#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//using namespace std;
//int t,n;
//string s;
//
//void Try(string s)
//{
//	for (int j='A'; j<='B'; j++)
//	{
//		s+=j;
//		if (s.size()==n)
//			cout << s << " ";
//		else
//			Try(s);
//        s.pop_back();
//	}
//
//}
//
//void solve()
//{
//	cin >> n;
//	Try("");
//	cout << endl;
//}
//
//int main()
//{
//	faster();
//	cin >> t;
//	while (t--)
//		solve();
//	return 0;
//}
//


