#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t,n, a[25],s=0;
bool b[25] = {0};
void printf(int i)
{
	cout << "(" << a[1];
	if (i>1)
	for (int j = 2; j <= i; j++)
		cout << " " << a[j] ;
	cout << ") ";
}

void Try(int i)
{
	for (int j = a[i-1]; j >= 1; j--)
	{	
		a[i]=j;
		s+=j;
		if(s>=n)
		{
			if (s==n)
				printf(i);
		}
		else 
			Try(i+1);
		s-=j;	
	}	
}
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		s=0;
		a[0]=n+1;
		Try(1);
		cout << endl;
	}
	return 0;
}

