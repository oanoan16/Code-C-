#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t, a[6], b[6], r[6], o[6], s=0;
bool c;

int cal(int x, int y, int z)
{
	if (z==1) return x+y;
	else if (z==2) return x-y;
	else if (z==3) return x*y;
}

bool check()
{
	s=b[1];
	for (int i=2; i<=5; i++)
		s=cal(s, b[i], o[i-1]);
	if (s==23) return true;
	return false;
}

void Try_Op(int x)
{
	if (c) return;
	for (int i=1; i<=3; i++)
	{
		o[x]=i;
		if (x==4)
		{
			if (check()) c=true;
		}
		else Try_Op(x+1);
	}
}

void Try_Num(int x)
{
	if (c) return;
	for (int i=1; i<=5; i++)
	{
		if (r[i]==0)
		{
			b[x]=a[i];
			r[i]=1;
			if (x==5) Try_Op(1);
			else  Try_Num(x+1);
			r[i]=0;
		}		
	}
}

void solve()
{
	for (int i=1; i<=5; i++)
		cin >> a[i];
	Try_Num(1);
	if (c) cout << "YES" << endl;
	else   cout << "NO" << endl;	
	
}
int main()
{
	faster();
	cin >> t;
	while (t--)
	{
		c=false;
		solve();	
	}	
	return 0;
}

//    			check bieu thuc
//				cout << b[1] <<" ";
//				for (int i=2; i<=5; i++)
//				cout << o[i-1] << " "<< b[i] << " ";
//				cout << endl;

/*
6
1 1 1 1 1
1 2 3 4 5
2 3 5 7 11
6 3 7 2 1
23 23 23 23 23 
5 5 5 5 5 

NO
YES 
YES
YES
YES
NO
*/


