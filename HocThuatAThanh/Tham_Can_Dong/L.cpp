#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, a[20][20], check[100], gk=1e9, cost=0, g=1e9, Cmin=0, x[100], s, dd[100];

void input(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
			if (Cmin > a[i][j] && a[i][j] != 0)
				Cmin = a[i][j];
		}		
	}
	x[1] = 1;
	dd[1]=1;
}

void BaB(int k){
	for (int i = 2; i <= n; i++){
		if (!check[i]){
			x[k] = i;
			check[i]++;
			cost += a[x[k - 1]][x[k]];
			gk = cost + (n - k + 1)*Cmin;
			if (k == n && gk < g){
				g = gk;
				s = cost + a[x[k]][1];
			}	
			else if (gk < g)
				BaB(k + 1);
			check[i]--;
			cost -= a[x[k - 1]][x[k]];			
		}
	}
}

int main()
{
	faster();
	input();
	BaB(2);
	cout << s << endl;	
}

