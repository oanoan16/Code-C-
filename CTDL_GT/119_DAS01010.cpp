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
    int n, k, a[50], b[50], c=0;
    cin >> n >> k;
    for (int i=1; i<=k; i++){
        cin >> a[i];
        b[i]=a[i];
    }
    int j=k;
    while (j>0 && a[j]==n-k+j) j--;
    if (j==0) c=k;
    else {
        b[j]=b[j]+1;
        c=k;
        for (int i=j+1; i<=k; i++) b[i]=b[i-1]+1;
        for (int i=1; i<=k; i++)
            for (int h=1; h<=k; h++)
                if (b[i]==a[h]) c--;
    }
    cout << c;
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


