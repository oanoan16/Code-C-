
#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
	faster();
	string s1, s2;
	vector <string> v1, v2;
	stringstream ss, se;
	getline(cin, s1);
	getline(cin, s2);
	
	ss << s2;
	while (!ss.eof()){
		ss >> s2;
		v2.push_back(s2);
	}
	
	se << s1;
	while (!se.eof()){
		se >> s1;
		int c=0;
		for (int i=0; i<v2.size(); i++)
			if (s1.compare(v2[i])==0) c=1;
		if (c==0) v1.push_back(s1);
	}
	sort(v1.begin(), v1.end());
	for (int i=0; i<v1.size(); i++){
		if (i==0) cout << v1[i] << " ";
		else if (i!=0 && v1[i-1]!=v1[i]) cout << v1[i] << " ";
	}
	return 0;
}
