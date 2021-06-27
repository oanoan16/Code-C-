#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[20][20], n, gk=1e9, cost=0, g=1e9, Cmin=1e9, visited[20], s, x[100] ;

void BaB(int k){
    for (int i=2; i<=n; i++){
        if (!visited[i]){
            x[k]=i;
            visited[i]=1;
            cost+=a[x[k-1]][i];
            gk=cost+(n-k+1)*Cmin;
            if (k==n && gk<g){
                g=gk;
                s=cost+a[x[k]][1];
            }
            else if (gk<g)
                BaB(k+1);
            visited[i]=0;
            cost-=a[x[k-1]][i];
        }
    }
}

void solve(){
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            if (!a[i][j] && Cmin>a[i][j]) Cmin=a[i][j];
        }
    }
    visited[1]=1;
    x[1]=1;
    s=0;
    BaB(2);
    cout << s;
    cout << endl;
}

int main()
{
    faster();
    solve();
    return 0;
}