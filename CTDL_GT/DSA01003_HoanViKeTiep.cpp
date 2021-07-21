#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, a[1000];
    cin >> n;
    for (int j=1; j<=n; j++) cin >> a[j];
    int i=n;
    a[0]=9;
    while (i>=0 && a[i]<=a[i-1]) i--;
    if (i>0){
        int j=n;
        while(a[i-1]>=a[j]) j--;
        swap(a[i-1], a[j]);
        sort(a+i, a+n+1);
    }
    else{
        a[1]=1;
        for (int j=2; j<=n; j++) a[j]=a[j-1]+1; 
    }
    for (int j=1; j<=n; j++) cout << a[j] << " ";
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

/*
void solve(){
    int n;
    cin >> n;
    vi a(n);
    for (int i=0;  i<n; i++) cin >> a[i];
    next_permutation(a.begin(), a.end());
    for (auto x:a){
        cout << x << " ";
    }
    cout << endl;
}
*/
