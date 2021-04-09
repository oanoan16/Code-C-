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
	string s, r;
	cin >> s;
	int n=s.size();
	r=s+'1';
	char m='1';
	int i=0, end=0, mi=0, d=0;
	for (int i=0; i<n; i++){
		if (s[i]=='I'){
			r[i]=m+mi;
			mi++;
			if (i>end){
				for (int j=i-1; j>=end; j--){
					r[j]=r[j+1]+1;	
					mi++;
				}
			}
			end=i+1;
		}
	}
	for (int i=end; i<n; i++) 
		if (s[i]=='D') d++;
	if (d>0)
		for (int i=end; i<n; i++){
			if (i==end) r[i]=d+'1'+mi;
			else r[i]=r[i-1]-1;
			mi++;
	} 
	if (s[n-1]=='I') r[n]='1'+mi;
	else r[n]=r[n-1]-1;
	cout << r << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}


