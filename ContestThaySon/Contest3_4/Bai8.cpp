#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
typedef pair <int, int> pii;
vector <pii> vp;

bool comp(pii a, pii b){
	if (a.second == b.second) return (a.first < b.first);
	else return (a.second < b.second);
}

void solve(){
	int n, d=1;
	cin >> n;
	vp.resize(n);
	for (int i=0; i<n; i++)
		cin >> vp[i].first;
	for (int i=0; i<n; i++)
		cin >> vp[i].second;
	sort(vp.begin(), vp.end(), comp);
	int timeEnd = vp[0].second;
	for (int i=1; i<n; i++){
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
	int t;
	cin >> t;
	while (t--)
		solve();	
	return 0;
}


