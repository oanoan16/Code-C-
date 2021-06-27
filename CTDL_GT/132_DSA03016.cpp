#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int s, d, c=-1, tmp;
    cin >> s >> d;
    int a[d];
    tmp=d;
    if (s==0){
        c = ((d==1) ? 0 : -1);
    }
    else if (s<=9*d){ 
        c=2;
        s--;
        d--;
        while(d>0){
            if (s>9){
                a[d]=9;
                s-=9;
            }
            else{
                a[d]=s;
                s=0;
            }
            d--;
        }
        a[0]=s+1;
    }
    if (c==-1 || c==0) cout << c;
    else{
        for (int i=0; i<tmp; i++) cout << a[i];
    }
    cout << endl;
}   

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}




