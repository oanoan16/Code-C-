#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int main(){
    faster();
    int t=1;
	cin >> t;
    cin.ignore();
	while (t--){
        string s1;
        string s2;
        getline(cin, s1);
        getline(cin, s2);
        vector <string> vs, vs2, ans;
        stringstream ss, ss2;

        ss2 << s2;
        while (ss2>>s2){
            vs2.push_back(s2);
        }

        ss << s1;
        while (ss >> s1){
		    int c=0;
		    for (int i=0; i<vs2.size(); i++)
			    if (s1.compare(vs2[i])==0) c=1;
		    if (c==0) vs.push_back(s1);
	    }

        sort(vs.begin(), vs.end());
        cout << vs[0] << " ";
        for (int i=1; i<vs.size(); i++){
            if (vs[i]!=vs[i-1]) cout << vs[i] << " ";
        }
        cout << endl;
    }
    return 0;
}




