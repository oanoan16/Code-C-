#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, a[6], b[6], o[6], c, visited[6];

int cal(int x, int y, int op){
    if (op==1) return x+y;
    else if (op==2) return x-y;
    return x*y;
}

bool check(){
    int s=b[1];
    for (int i=2; i<=5; i++){
        s=cal(s, b[i], o[i-1]);
    }
    if (s==23) return true;
    return false;

}

void Try_Op(int x){
    if (c) return;
    for (int i=1; i<=3; i++){
        o[x]=i;
        if (x==4){
            if (check()) c=1;
        }
        else Try_Op(x+1);
    }
}

void Try_Num(int x){
    if (c) return;
    for (int i=1; i<=5; i++){
        if (!visited[i]){
            b[x]=a[i];
            visited[i]=1;
            if (x==5) Try_Op(1);
            else Try_Num(x+1);
            visited[i]=0;
        }
    }
    
}

void solve(){
    for (int i=1; i<=5; i++) cin >> a[i];
    c=0;
    Try_Num(1);
    if (c) cout << "YES";
    else cout <<"NO";
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