#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define st second
#define e first

using namespace std;
typedef pair <int, int> pii;
vector <pii> vp;
vector <string> vs; 
string s;
int a[15];

void check(){
	stack <int> st;
	for (int i=0; i<s.size(); i++){
		if (s[i]=='(') st.push(i);
		if (s[i]==')'){
			vp.push_back(make_pair(st.top(), i));
			st.pop();
		}
	}
}

void del(){
	int c=0, r[200]={0};

	for (int i=0; i<vp.size(); i++){
		if (a[i]){
			c=1;
			r[vp[i].st]++;
			r[vp[i].e]++;
		}
	}
	
	string tmp="";
	if (c){
		for (int i=0; i<s.size(); i++)
			if (!r[i]) tmp+=s[i];
		vs.push_back(tmp);	
	}
}

void Try(int i){
	for (int j=0; j<=1; j++){
		a[i]=j;
		if (i==vp.size()-1) del();
		else Try(i+1);
	}
}

int main()
{
	faster();
	getline(cin, s);
	check();
	Try(0);
	sort(vs.begin(), vs.end());
	for (int i=0; i<vs.size(); i++){
		if (i==0) cout << vs[i] << endl;
		else if (i!=0 && vs[i-1]!=vs[i]) cout << vs[i] << endl;
	}
	return 0;
}


