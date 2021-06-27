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
    int n, a[100], check=0;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-2; i++){
        check=0; 
        for (int j=0; j<n-i-1; j++){
            if (a[j]>a[j+1]){
               swap(a[j], a[j+1]);
               check=1; 
            }
        }
        if (check){
            cout << "Buoc " << i+1 << ": ";
            for (int i=0; i<n; i++) cout << a[i] << " ";
            cout << endl;
        }
        else break;
    }
}

int main()
{
    faster();
    solve();
}


