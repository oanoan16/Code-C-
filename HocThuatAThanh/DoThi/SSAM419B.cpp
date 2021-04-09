#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;


void solve(){
	int n, m, u, a, b, ans[1005], c=0;
	queue <int> q;
	vi g[1005];
	bool v[1005]={0};
	
	cin >> n >> m >> u;
	for (int i=0; i<m; i++){
		cin >> a >> b;		
		g[a].push_back(b);
		g[b].push_back(a);		
	}
	
	v[u]=1;
	q.push(u);
	while (!q.empty()){
		u=q.front();
		cout << u << " ";
		q.pop();
		for (int i=0; i<g[u].size(); i++){
			if (!v[g[u][i]]){
				v[g[u][i]]=1;
				q.push(g[u][i]);
			}
		}					
	}
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--) solve();	
	return 0;
}


