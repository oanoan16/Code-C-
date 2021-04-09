#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	string s1, s2;
	int f[1005][1005]={0};
	cin >> s1;
	cin >> s2;
	s1.insert(0, " ");
	s2.insert(0, " ");
	for (int i=1; i<=s1.size(); i++){
		for (int j=1; j<=s2.size(); j++){
			if (s1[i]==s2[j]) f[i][j]=f[i-1][j-1]+1;
			else f[i][j]=max(f[i-1][j], f[i][j-1]);
		}
	}
	cout << f[s1.size()-1][s2.size()-1];	
	return 0;
}


