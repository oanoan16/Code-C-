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
    int n, a[100];
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (a[j]<a[i]) swap(a[i], a[j]);
        }
        cout << "Buoc " << i+1 << ": ";
        for (int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    solve();
}


