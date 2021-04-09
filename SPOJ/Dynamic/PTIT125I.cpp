#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
 
int main(){
	faster();
	int n, k;
	string s, ans="";
	stack <char> st;
	cin >> n >> k;
	cin >> s;
	for (int i=0; i<s.size(); i++){
		if (st.empty())	st.push(s[i]);
		else{
			while (!st.empty() && s[i]>st.top() && k>0){
				st.pop();
				k--;
			}
			st.push(s[i]);
		}
	}
	while (!st.empty() && k>0){
		st.pop();
		k--;
	}
	while (!st.empty()){
		char c=st.top();
		st.pop();
		ans+=c;
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}
