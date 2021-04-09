#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int n, a[10000], mx=-1e9, mn=1e9, kx, kn;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
		if (a[i]>mx) {
			mx=a[i];
			kx=i;
		}
		else if (a[i]<mn){
			mn=a[i];
			kn=i;
		}
	}
	cout << mx <<" " << kx << endl;
	cout << mn <<" " << kn << endl;
	return 0;
}


