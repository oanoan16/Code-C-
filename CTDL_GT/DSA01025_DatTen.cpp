#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, k, a[20];
char name='A'-1;

void print(){
    for (int i=1; i<=k; i++){
        cout << char (name + a[i]);;
    }
    cout << endl;
}

void Try(int i){
    for (int j=a[i-1]+1; j<=n-k+i; j++){
        a[i]=j;
        if (i==k) print();
        else Try(i+1);
    }
}

void solve(){
    cin >> n >> k;
    a[0]=0;
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


