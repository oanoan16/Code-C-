#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, c, k, a[20];

void print(){
    for (int i=1; i<=n; i++) cout << a[i];
    cout << endl;
}

void Try(int i){
    for (int j=0; j<=1; j++){
        a[i]=j;
        if (j==1) c++;
        if (i==n){
            if (c==k) print();
        }
        else Try(i+1);
    }
    c--;
}

void solve(){
    cin >> n >> k;
    c=0;
    Try(1);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


