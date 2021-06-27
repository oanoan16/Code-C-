#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, c, k, a[10], ans[10];
string s;
vector <string> vword, vnum;

void printN(){
    string s="";
    for (int i=1; i<=n; i++) s+=char(48+ans[i]);
    vnum.push_back(s);
}

void printW(){
    string s="";
    for (int i=1; i<=n; i++) s+=char(64+ans[i]);
    vword.push_back(s);
}

void TryN(int i){
    for (int j=1; j<=n; j++){
        ans[i]=j;
        if (i==n) printN();
        else TryN(i+1);
        }
}

void TryW(int i){
    for (int j=1; j<=n; j++){
        if (!a[j]){
            ans[i]=j;
            a[j]=1;
            if (i==n) printW();
            else TryW(i+1);
            a[j]=0;
        }
    }
}

void solve(){
    cin >> n;
    memset(a, 0, sizeof(a));
    TryW(1);
    TryN(1);
    for (int i=0; i<vword.size(); i++){
        for (int j=0; j<vnum.size(); j++){
            cout << vword[i] << vnum[j] << endl;
        }
    }
}

int main()
{
    faster();
    solve();
    return 0;
}


