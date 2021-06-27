#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int m, n, w[105], v[105], ans;
string path_ans;

void Try(int i, int curr_w, int curr_v, string path){
    if (curr_w > m) return;
    if (i==n+1){
        if (curr_v > ans){
            ans=curr_v;
            path_ans=path;
        }
        return;
    }
    Try(i+1, curr_w, curr_v, path+'0');
    Try(i+1, curr_w+w[i], curr_v+v[i], path+'1');
}

void solve(){
    cin >>  n >> m;
    ans=0;
    for (int i=1; i<=n; i++) cin >> v[i];
    for (int i=1; i<=n; i++) cin >> w[i];
    Try(0, 0, 0, "");
    cout << ans << endl;
    for (int i=1; i<=n; i++) cout << path_ans[i] << " ";
    cout << endl;
}   

int main()
{
    faster();
    solve();
    return 0;
}