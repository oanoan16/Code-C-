#include <iostream>
#include <stack>
using namespace std;

int n, k, ce[105], a[100][100], c=0;

int main(){
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
    stack <int> s;
    s.push(k);
    ce[++c]=k;
    while(!s.empty()){
        int x=s.top();
        int check=0;
        for (int i=1; i<=n; i++){
            if (a[x][i]==1){
                s.push(i);
                a[x][i]=0;
                a[i][x]=0;
                check=1;
                break;
            }
        }
        if (!check){
            ce[++c]=x;
            s.pop();
        }
    }
    for (int i=c; i>1; i--) cout << ce[i] << " ";
    cout << endl;
    return 0;
}