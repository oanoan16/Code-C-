#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int  a[10][10], Cmax, c, bc[10][10];

bool check(int r, int c){
    int i, j;
    for (i=1; i<=r; i++)
        if (bc[i][c]) return false;
    for (i=r, j=c; i>0 && j>0; i--, j--)
        if (bc[i][j]) return false;
    for (i=r, j=c; i>0 && j<9; i--, j++)
        if (bc[i][j]) return false;
    return true;
}

void Try(int x){
    for (int i=1; i<=8; i++){
        if (check(x, i)){
            c+=a[x][i];
            bc[x][i]=1;
            if (x==8){
                if (c>Cmax) Cmax=c;
            }
            else Try(x+1);
            c-=a[x][i];
            bc[x][i]=0;
        }
    }
}

void solve(){
    for (int i=1; i<=8; i++)
        for (int j=1; j<=8; j++){
            cin >> a[i][j];
            bc[i][j]=0;
        }
    c=0;
    Cmax=0;
    Try(1);
    cout << Cmax << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}