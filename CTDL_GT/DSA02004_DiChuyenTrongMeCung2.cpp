#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[11][11];
bool check=1, visited[10][10];
void Try(int i, int j, int n, string s){
    if (i==n && j==n){
        cout << s << " ";
        check=0;
        return;
    }
    else{
        visited[i][j]=true;
        if (a[i+1][j]==1 && i<n && !visited[i+1][j]){
            Try(i+1, j, n, s+'D');
        }
        if (a[i][j-1]==1 && j>1 && !visited[i][j-1]){
            Try(i, j-1, n, s+'L');
        }
        if (a[i][j+1]==1 && j<n && !visited[i][j+1]){
            Try(i, j+1, n, s+'R');
        }
        if (a[i-1][j] && i>1 && !visited[i-1][j]){
            Try(i-1, j, n, s+'U');
        }
        visited[i][j]=false;
    }

}

void solve(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
    for (int i=1; i<=10; i++)
        for (int j=1; j<=10; j++) visited[i][j]=false;
    check=1;
    if (a[1][1]==1) Try(1, 1, n, "");
    if (check) cout << -1;
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
