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
	stack <int> s;
	vi g[1005];
	bool v[1005]={0};
	
	cin >> n >> m >> u;
	for (int i=0; i<1005; i++) v[i]=0;
	for (int i=0; i<m; i++){
		cin >> a >> b;		
		g[a].push_back(b);
		g[b].push_back(a);		
	}
	
	v[u]=1;
	s.push(u);
	ans[++c]=u;
	while (!s.empty()){
		int x=s.top();
		s.pop();
		for (int i=0; i<g[x].size(); i++){
			int tmp=g[x][i];
			if (!v[tmp]){
				ans[++c]=tmp;
				v[tmp]=1;
				s.push(x);
				s.push(tmp);
				break;
			}
		}					
	}

	for (int i=1; i<=c; i++)
		cout << ans[i] << " ";
	cout << endl;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--) solve();	
	return 0;
}


