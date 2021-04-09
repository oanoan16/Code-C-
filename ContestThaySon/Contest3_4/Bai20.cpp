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
	string s;
	cin >> s;
	stack <char> st;
	int d=0;
	if (s[0]==']') {
		d++;
		s[0]='[';
	}
	if (s[s.size()-1]=='[' ){
		s[s.size()-1]=']';
		d++;
	}
	for (int i=0; i<s.size(); i++){
		if (s[i]=='[') st.push(s[i]);
		else{
				if (st.empty()){
					d++;
					s[i]='[';
					st.push(s[i]);
				}
				else 
					if (st.top()=='[') st.pop();
		} 
	}
	cout << d + (st.size())/2 << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();	
	return 0;
}


