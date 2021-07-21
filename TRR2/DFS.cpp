#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    int n, a[100][100], ans[100], c=0, visited[105]={0};
    cin >> n;
    vector <int> v[n+1];
    for (int i=1; i<=n; i++){
        for ( int j=1; j<=n; j++){
            cin >> a[i][j];
            if (a[i][j]==1){
                v[i].push_back(j);
            }
        }
    }
    
    stack <int> s;
    s.push(1);
    ans[++c]=1;
    visited[1]=1;
    while (!s.empty()){
        int x=s.top();
        s.pop();
        for (auto j:v[x]){
            if (!visited[j]){
                ans[++c]=j;
                visited[j]=1;
                s.push(x);
                s.push(j);
                break;
            }
        }
    }
    for (int i=1; i<=c; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}