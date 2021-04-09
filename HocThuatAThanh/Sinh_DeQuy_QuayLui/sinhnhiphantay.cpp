#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, a[15];
bool check=1;

void printf()
{
	for (int i=1; i<=n; i++)
		cout << a[i];
	cout << endl;
}

void solve(){
	int i=n; 
	while (i>=0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if (i>=0) {
		a[i]=1;
		printf();
	}
	else check=0;
}
int main(){
	faster();
	cin >> n;
	printf();
	while (check)
		solve();
	return 0;
}

