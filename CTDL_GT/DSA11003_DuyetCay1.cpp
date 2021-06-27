#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <vector <int>> g;
vector <int> r;
vector <int> ele;

int a[N], b[N];

int find(int l, int r, int v){
    for (int i=l; i<=r; i++){
        if (a[i]==v) return i;
    }
    return -1;
}

void postOrder(int l_in, int r_in, int l_pre, int r_pre){
    int post=find(l_in, r_in, b[l_pre]);
    int tmp=post-l_in;
    if (post != l_in){
        postOrder(l_in, post-1, l_pre+1, l_pre+tmp);
    }
    if (post != r_in){
        postOrder(post+1, r_in, l_pre+tmp+1, r_pre);
    }
    cout << b[l_pre] << " ";
}
void solve(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    postOrder(0, n-1, 0, n-1);
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


