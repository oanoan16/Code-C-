#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	string s1;
    cin >> s1;
    int j=0, c=0;
    for (int i=s1.size()-1; i>=0; i--){
        j++;
        if (s1[i]=='1'){
            if (j%4==0) c+=1;
            else if (j%4==1) c+=2;
            else if (j%4==2) c+=4;
            else c+=3;
        }
        c%=5;
    }
    if (c%5==0) cout << "Yes";
    else cout << "No";
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




