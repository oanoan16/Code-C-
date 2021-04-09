#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int ans=0;
string s;

int main(){	
    faster();
    int t;
    cin >> t;
    while (t--){
		ans=0; 
		cin >> s;
		vector <char> a;
    	a.push_back('2');
    	for (int i=0; i<s.size(); i++){
        	a.push_back(s[i]);
        	while(a.size()>=3 && a[a.size()-1]=='0' 
           	 	&& a[a.size()-2]=='0' 
            	&& a[a.size()-3]=='1'){
            	a.pop_back(); a.pop_back(); a.pop_back();
            	ans+=3;
        	}
    	}
    	cout << ans << endl;
	} 
    return 0;
}