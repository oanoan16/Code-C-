#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

string test1="ABBADCCABDCCABD";
string test2="ACCABCDDBBCDDBB";

void solve(){
	char a[20];
    int n, c=0;
    cin >> n;
    for (int i=0; i<15; i++){
        cin >> a[i];
    }
    string tmp=test1;
    if (n==102) tmp=test2;
    for (int i=0; i<15; i++){
        if (a[i]==tmp[i]) c++;
    }
    printf("%.2f\n", (float)c/15*10);
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




