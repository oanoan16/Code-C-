#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int a[25], v[25], n;

void print(){
    for (int i=1; i<=n; i++) cout << a[i];
    cout <<  " ";
}

void Try(int i){
    for (int j=1; j<=n; j++){
        if (!v[j]){
            a[i]=j;
            v[j]=1;
            if (i==n) print();
            else Try(i+1);
            v[j]=0;
        }
    }
}
void solve(){
    cin >> n;
    memset(v, 0, sizeof(v));
    Try(1);
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


