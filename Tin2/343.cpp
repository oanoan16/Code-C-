#include <bits/stdc++.h>
#define faster() ios::sync_with_stido(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
	string s;
	stringstream ss;
	vector <string> vs;
	int a[100]={0};
	getline(cin, s);
	for (int i=0; i<s.size(); i++) s[i]=tolower(s[i]);
	ss << s;
	while (!ss.eof()){
		ss >> s;
		int c=0;
		if (vs.empty()) vs.push_back(s);
		else{
			for (int i=0; i<vs.size(); i++)
				if (vs[i].compare(s)==0){
					a[i]++;
					c=1;
				}
			if (c==0) vs.push_back(s);
		}
	}
	for (int i=0; i<vs.size(); i++) 
		cout << vs[i] << " " << a[i]+1 << endl;
}
