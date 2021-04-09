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
    int n, a[100], key;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    cout << "Buoc 0" << ": " << a[0] << endl;
    for (int i=1; i<n; i++){
        int j=i-1;
        key=a[i];
        while(key<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        cout << "Buoc " << i << ": ";
        for (int k=0; k<=i; k++) cout << a[k] << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    solve();
}


