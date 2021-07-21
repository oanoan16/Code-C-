#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int n, m, a[105][105], v[105]={0};
// 1 là đã đi 
// 0 là chưa đi 
void DFS(int u){
    v[u]=1;
    cout << u << " ";
    for (int i=1; i<=n; i++){
        if (a[u][i]==1 && v[i]==0){
            v[i]=1;
            DFS(i);
        }
    }
}

int main(){
    int u;
    cin >> n >> m >> u;
    for (int i=1; i<=100; i++){
        for (int j=0; j<=100; j++) a[i][j]=0;
    }
    for (int i=1; i<=m; i++){
        int c, d;
        cin >> c >> d;
        a[c][d]=1;
        a[d][c]=1;
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++) cout << a[i][j] << " ";
        cout <<endl;
    }
//    DFS(u);

    // v[u]=1;
    // stack <int> s;
    // s.push(u);
    // cout << u << " ";
    // while (!s.empty()){
    //     int x=s.top();
    //     s.pop();
    //     for (int i=1; i<=n; i++){
    //         if (a[x][i]==1 && v[i]==0){
    //             v[i]=1;
    //             cout << i << " ";
    //             s.push(x);
    //             s.push(i);
    //             break;
    //         }
    //     }
    // }

    // BFS 
    v[u]=1;
    queue <int> q;
    q.push(u);
    cout << u << " ";
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (int i=1; i<=n; i++){
            if (a[x][i]==1 && v[i]==0){
                v[i]=1;
                cout << i << " ";
                q.push(i);
            }
        }
    }

    

   
    return 0;
}