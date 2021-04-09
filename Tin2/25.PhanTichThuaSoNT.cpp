#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n,i=2,c=0;
	cin >> n;
	while (n>1)
	{
		if (n%i==0)
		{
			cout << i << " ";
			while (n%i==0){
				n/=i;
			}	
		}
		i++;
	}	
	return 0;
}


