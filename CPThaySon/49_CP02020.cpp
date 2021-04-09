#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

struct matrix{
	ull a[2][2];
	matrix(){
		a[0][0]=0;
		a[0][1]=1;
		a[1][0]=1;
		a[1][1]=1;
	}
};

matrix operator *(matrix b, matrix c){
	matrix m;
	for (int i=0; i<=1; i++)
		for (int j=0; j<=1; j++){
			m.a[i][j]=0;
			for (int k=0; k<=1; k++)
				m.a[i][j] = (m.a[i][j] + (b.a[i][k]*c.a[k][j])%N)%N;
		}
	return m;
}

matrix find(matrix m, ull n){
	if (n==1)	
		return m;
	if (n%2!=0) return find(m,n-1)*m;
	matrix r=find(m,n/2);
	return r*r;
}
void solve(){
	ull n; 
	cin >> n;
	matrix m;
	m=find(m,n);
	cout << m.a[0][1] << endl;		
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--) solve();	
	return 0;
}

