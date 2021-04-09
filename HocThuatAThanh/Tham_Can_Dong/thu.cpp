#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
ll a[3][3], b[3][3], s=0, r[3], c[3], smax=-1e10;
int n, kR, kC;

void game(){
	s=0;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)	
			b[i][j]=0;
	for (int i=1; i<=n; i++)
	{
		ll min=1e10;
		for (int j=1; j<=n; j++)
		{
			if (b[r[i]][j]==0 && a[r[i]][j]<min)
			{
					min=a[r[i]][j];
					kR=r[i];
					kC=j;
			}
		}
		s+=a[kR][kC];
		for (int j=1; j<=n; j++)
			b[j][kC]=1;		
	}
}

void Try(int i){
	for (int j=1; j<=n; j++){
		if (!c[j]){
			r[i]=j;
			c[j]=1;
			if (i==n){
				game();
				if (s>smax)	smax=s;
			}
			else Try(i+1);
			c[j]=0;
		}
	}
}

void solve(){
	cin >> n;
	for (int i=1; i<=n; i++){
		r[i]=0;
		c[i]=0;
		for (int j=1; j<=n; j++)
			cin >> a[i][j];
	}
	smax=-1e10;
	Try(1);
	cout << smax << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();	
	return 0;
}


