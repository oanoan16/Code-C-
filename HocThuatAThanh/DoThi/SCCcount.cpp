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

int n, m, SCCc=0, t=0;

// lowN: thu tu nho nhat cua goc de di dien dinh do
// v : visited : thu tu duoc duyet cua dinh do
// t : thu tu xet cua dinh
vi lowN, v, g[100005]; 
stack <int> s;

void link(int u){
	lowN[u]=++t; 
	v[u]=t; 
	s.push(u);
	
	for (int i=0; i<g[u].size(); i++){
		int tmp=g[u][i];
		if (v[tmp]!=0) lowN[u]=min(lowN[u], lowN[tmp]);
		else{
			link(tmp);
			lowN[u]=min(lowN[u], lowN[tmp]);
		}
	}
		
	if (v[u]==lowN[u]){
		SCCc++;
		int k;
		do{
			k=s.top();
			s.pop();
			lowN[k]=1e6; 
			v[k]=1e6;
		}
		while (u!=k);
	}
}

int main(){
	faster();
	cin >> n >> m;
	for (int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		g[a].pb(b);
	}
	
	lowN.resize(n+1, 0);
	v=lowN;
	
	for (int i=1; i<=n; i++){
		if (lowN[i]==0) link(i);
	}
	
	cout << SCCc;	
	return 0;
}

