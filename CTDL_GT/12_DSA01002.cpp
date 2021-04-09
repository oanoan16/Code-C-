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
    int n, k, a[1000];
    cin >> n >> k;
    for (int j=1; j<=k; j++) cin >> a[j];
    int i=k;
    while (i>0 && a[i]==n-k+i) i--;
    if (i>0){
        a[i]+=1;
        for (int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
    }
    else{
        a[1]=1;
        for (int j=2; j<=k; j++) a[j]=a[j-1]+1; 
    }
    for (int j=1; j<=k; j++) cout << a[j] << " ";
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


