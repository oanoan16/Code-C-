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
    int n;
    cin >> n;
    cin.ignore();
    int a[n][n]={0};
    for (int i=0; i<n; i++){
        string s;
        getline(cin, s);
        stringstream ss;
        int u;
        ss << s;
        while (ss >> u){
            a[i][u-1]=1;
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    faster();
    solve();
    return 0;
}