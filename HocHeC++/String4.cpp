#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int divisible(int k, string s){
    int c=0, n=0;
    for (int i=0; i<s.size(); i++){
        n=0;
        for (int j=i; j<s.size(); j++){
            n=n*10+s[j]-'0';
            n=n%k;
            if (n%k==0) c++;
        }
    }
    return c;
}

void solve(){
    string s;
    cin >> s;
    cout << divisible(8, s)-divisible(24, s);
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 