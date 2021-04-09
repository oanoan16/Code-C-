#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
typedef pair <int, int > pii;
 
vector <pii> vp;
 
bool comp(pii a, pii b){
	if (a.second == b.second) return (a.first < b.first);
	else return (a.second < b.second);
}
void solve(){
	int n, d=1, a, b;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		vp.push_back(make_pair(a,b));
	}
	sort(vp.begin(), vp.end(), comp);
	int timeEnd = vp[0].second;
	for (int i=0; i<n; i++){
		if (vp[i].first >= timeEnd){
			d++;
			timeEnd=vp[i].second;
		}
		
	}
	cout << d << endl;
}
 
int main()
{
	faster();
	solve();
	return 0;
}
 
 
