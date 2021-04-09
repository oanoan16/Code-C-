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

vi g[1005], v;
int n, m, ans[1005], c=0, dt=0;

void CN(int u){
	stack <int> s;
	v[u]=1;
	s.push(u);
	while (!s.empty()){
		u=s.top();
		s.pop();
		for (int i=0; i<g[u].size(); i++){
			int tmp=g[u][i];
			if (!v[tmp]){
				v[tmp]=1;
				s.push(u);
				s.push(tmp);
				break;				
			}
		}		
	}
}

int main(){
	faster();
	cin >> n >> m;
	for(int i=1; i<=m; i++){
		int a, b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	} 
	v.resize(n+1, 0);
	for (int i=1; i<=n; i++){
		if (!v[i]){
			CN(i);
			c++;
		}
	}
	v.assign(n+1, 0);	
	for (int i=1; i<=n; i++){
		v[i]=1;
		int k=0;
		for (int j=1; j<=n; j++){
			if (!v[j]){
				CN(j);
				k++;
			}
		}
		if (k>c) dt++;
		v.assign(n+1, 0);
	}
			
	cout << dt;
	
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
*/

