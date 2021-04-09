#include <bits/stdc++.h>
#include <algorithm>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int gcd(int a, int b){
	if (a==0) return b;
	return gcd(b%a, a);
}

void solve(){
	int n, a[100005], cd=0, c=0;
	bool check=0;
	
	cin >> n;	
	for (int i=0; i<n; i++){
		cin >> a[i];
		cd=gcd(cd, a[i]);
	}
	
	if (cd>1) check=1;
	else if (n>=2){
		check=1;
		for (int i=0; i<n-1; i++){
			if (a[i]&1 && a[i+1]&1){
				a[i]=2; 
				a[i+1]=2;
				i++;
				c++;
			}
		}
		for (int i=0; i<n-1; i+=2)
			if (a[i]&1 || a[i+1]&1) c+=2;
		if (n&1 && a[n-1]&1) c+=2; 		
	}	
	if (check) cout << "YES " << c << endl;
	else cout << "NO" << endl;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--) solve();	
	return 0;
}


