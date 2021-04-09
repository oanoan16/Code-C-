#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

bool nto(int n){
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return false;
	return true;
}
int main()
{
	faster();
	int n, dem=0, a[10000], t[10000];
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	
	for (int i=1; i<=n; i++){
		if (nto(a[i])){
			dem++;
			t[dem]=a[i];			
		}
	}
	
	cout << dem << " ";
	for (int i=1; i<=dem; i++)
		cout << t[i] << " ";
	return 0;
}


