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

int n, m, t=0, bridges=0;

// low: gian tri thu tu nho nhat trong cay DFS dinh u
// num : thu tu dinh duoc duyet den
// t : thu tu xet cua dinh
// numChild : so nhanh cay nut n
vi low, num, g[10005], node; 

void DFS(int u, int p){
	low[u]=num[u]=++t;  
	int numChild=0;
	
	for (int i=0; i<g[u].size(); i++){
		int v=g[u][i];
		if (v!=p){
			if (num[v]!=0) low[u]=min(low[u], num[v]);
			else {
				DFS(v, u);
				numChild++;
				low[u]=min(low[u], low[v]);
				if (low[v]>=num[v]) bridges++;
				if ((u!=p && low[v]>=num[u])|| (u==p && numChild>=2)) node[u]=1;
			}
		}
	}
	node[0]+=node[u];
}

int main(){
	faster();
	cin >> n >> m;
	for (int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	low.resize(n+1, 0);
	num=node=low;
	
	for (int i=1; i<=n; i++)
		if (!num[i]) DFS(i, i);

	cout << node[0] << " " << bridges;
	return 0;
}

