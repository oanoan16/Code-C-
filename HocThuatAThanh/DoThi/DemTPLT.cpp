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

vi g[1005], ans[1005];
int n, m, cn[1005], c=0;;
bool check[1005], v[1005];

void CN(int u){
	stack <int> s;
	int k=0;
	c++;
	v[u]=1;
	ans[c].pb(u);
	s.push(u);
	while (!s.empty()){
		u=s.top();
		s.pop();
		for (int i=0; i<g[u].size(); i++){
			int tmp=g[u][i];
			if (!v[tmp]){
				v[tmp]=1;
				ans[c].pb(tmp);
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
	
	for (int i=1; i<=n; i++)
		if (!v[i]) CN(i);	
	
	cout << c << endl;
	for (int i=1; i<=c; i++){
		for (int j=0; j<ans[i].size(); j++)
			cout << ans[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}


