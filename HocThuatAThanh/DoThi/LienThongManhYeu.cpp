#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vi g[1005];
int n, m, a, b, check;

int DFS(int u){
	stack <int> s;
	bool v[1005]={0};
	
	v[u]=1;
	s.push(u);
	int c=1;
	
	while (!s.empty()){
		u=s.top();
		s.pop();
		for (int i=0; i<g[u].size(); i++){
			int tmp=g[u][i];
			if (!v[tmp]){
				s.push(u);
				s.push(tmp);
				v[tmp]=1;
				c++;
				break;				
			}
		}
	}
	return c;
}

int main(){
	faster();
	cin >> n >> m;
	for (int i=0; i<m; i++){
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);		
	}
	
	for (int i=1; i<=n; i++){
		if (DFS(i)!=n) check=1;
	}
	(check) ? (cout <<  "NO") : (cout << "YES");	
	return 0;
}

/*
8 10
1 3
1 5
2 3
2 4
3 4
6 8
6 9
7 8
7 9
8 9

5 5
1 2
1 3
2 4
3 5
4 5
*/


