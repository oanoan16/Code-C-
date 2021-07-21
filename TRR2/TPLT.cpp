#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n, v[105]={0}, c=0, a[105][105];
    cin >> n;
    vector <int> g[105];
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            if (a[i][j]==1) g[i].push_back(j);
        }
    }
    for (int i=1; i<=n; i++){
        if (v[i]==0){
            c++;
            v[i]=1;
            queue <int> q;
            q.push(i);
            while (!q.empty()){
                int x=q.front();
                q.pop();
                for (auto j:g[x]){
                    if (v[j]==0){
                        v[j]=1;
                        q.push(j);
                    }
                }
            }
        }
    }
    cout << c << endl;
}
