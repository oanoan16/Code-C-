#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vector <int> g[100005];
int visited[100005];
int ans;

int DFS(int u){
    int res=1;
    stack <int> st;
    visited[u]=1;
    st.push(u);
    while (!st.empty()){
        int x=st.top();
        st.pop();
        for (auto j:g[x]){
            if (!visited[j]){
                visited[j]=1;
                st.push(x);
                st.push(j);
                res++;
                break;
            } 
        }
    }
    return res;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--){
        int n, k;
        ans=0;
        cin >> n >> k;
        memset(visited, 0, sizeof(visited));
        for (int i=0; i<1005; i++) g[i].clear();
        for (int i=0; i<k; i++){
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (int i=1; i<=n; i++){
            if (!visited[i]){
                int c=DFS(i);
                if (ans<c) ans=c;
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}


