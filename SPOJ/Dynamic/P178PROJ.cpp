#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
 
struct cmp{
	bool operator() (ll a, ll b) {
		return a > b;}
};
int main(){
	faster();
	priority_queue <ll, vector <ll>, cmp> q;
	ll n, s=0, a;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a;
		q.push(a);
	}
	while (q.size()>1)
	{
		s+= (q.top()%base);
		s%=base;
		ll tmp=q.top()%base;
		if (q.size()>1)	q.pop();
		else break;
		s+=(q.top()%base);
		s%=base;
		tmp+=q.top()%base;
		tmp%=base;
		if (q.size()>1)	q.pop();
		else break;
		q.push(tmp);		
	}
	cout << s << endl;	
	return 0;
}
 
