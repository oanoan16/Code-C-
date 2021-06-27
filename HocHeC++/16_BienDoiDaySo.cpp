#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;


void solve(){
    int a, b, c, d, e; 
	while (1){
        int cnt=0;
        cin >> a >> b >> c >> d;
        int s=a+b+c+d;
        if (s!=0){
            while (a!=b || b!=c || c!=d){
                e=a;
                a=abs(a-b);
                b=abs(b-c);
                c=abs(c-d);
                d=abs(d-e);
                cnt++;
            }
            cout << cnt << endl;
        }
        else break;
    }
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}




