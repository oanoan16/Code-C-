#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, k, ce[105], a[100][100], c=0;

void solve(){
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    stack <int> s;
    s.push(k);
    ce[++c]=k;
    while(!s.empty()){
        int x=s.top();
        int check=0;
        for (int i=1; i<=n; i++){
            if (a[x][i]==1){
                s.push(i);
                a[x][i]=0;
                a[i][x]=0;
                check=1;
                break;
            }
        }
        if (!check){
            ce[++c]=x;
            s.pop();
        }
    }
    for (int i=c; i>1; i--) cout << ce[i] << " ";
    cout << endl;
}

int main(){
    faster();
    solve();
    return 0;
}


