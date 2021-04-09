#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		ll a, b, c=1;
		cin >> a >> b;
		if (a==2 && b==3) c=1;
		else if (a<b && a<=3) c=0;
		if (c==1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}


