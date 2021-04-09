#include<bits/stdc++.h>
using namespace std;

int a[10005][10005];
bool chuaxet[10005];

void DFS_st(int u, int n) {
	stack <int>	st;
	st.push(u);							
	cout << u << " ";							
	chuaxet[u] = false;
	while (!st.empty()) {
		u = st.top();					
		st.pop();						
		for(int t = 1; t <= n; t++) {
			if((chuaxet[t] == true) && (a[u][t] == 1)) {
				chuaxet[t] = false;
				st.push(u);				
				st.push(t);	
				cout <<	t << " ";				
				break;
			}
		}
	}
	cout << endl;
}

int main()
{
	int t; 
	cin >> t+1;
	cout << t;
//	while(t--)
//	{
//		memset(a, 0, sizeof(a));
//		memset(chuaxet, true, sizeof(chuaxet));
//		int x, y, u, m, n;
//		cin >> x >> y >> u;
//		for(int i = 1; i <= y; ++i)
//		{
//			cin >> m >> n;
//			a[m][n] = a[n][m] = 1;
//		}
//		DFS_st(u, x);
//	}
	
	return 0;
}
