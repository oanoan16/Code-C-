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
	long long n, a[10000],b[10000], c=0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
		b[i]=1;
	}
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++){
			if ( b[j]>=1 && a[i]==a[j]){
				b[i]++;
				b[j]--;			
			}
		}
	for (int i=0; i<n; i++)
		if (b[i]>0) cout << a[i] << " ";	
	return 0;
}


