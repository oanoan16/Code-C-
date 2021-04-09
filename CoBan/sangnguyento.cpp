#include <bits/stdc++.h>
using namespace std;

int main()
{		
	int n;
	cin >> n;
	vector <bool> vP(n+1, true);
	vP[0] = false;
	vP[1] = false;
	for (int i = 2; i*i <= n; i++)
		if (vP[i])
			for (int j = i*i; j <= n; j+=i)
				vP[j] = false;
	for (int i = 2; i <= n; i++)
		if (vP[i])
			cout << i << " ";
   return 0;
}

