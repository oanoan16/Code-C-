#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int main(){
    int n, a[105][105], v[105]={0};
    queue <int> q;
    vector <int> g[105];
    
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            if (a[i][j]==1) g[i].push_back(j);
        }
    }
    
    v[1]=1;
    q.push(1);
    while (!q.empty()){
        int x=q.front();
        cout << x << " ";
        q.pop();
        for (auto i:g[x]){
            if (!v[i]){
                v[i]=1;
                q.push(i);
            }
        }
    }
    cout << endl;
    return 0;
}