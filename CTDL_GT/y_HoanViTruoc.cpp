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
    for (int j=0; j<n; j++) cin >> a[j];
    int i=n-1;
    while (i>0 && a[i-1]<=a[i]) i--;
    if (i>0){
        int j=i-1;
        while(j+1<n && a[j+1]<a[i-1]) j++;
        swap(a[i-1], a[j]);
        reverse(a+i, a+n);
    }
    else{
        reverse(a, a+n);
    }
    for (int j=0; j<n; j++) cout << a[j] << " ";
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


