#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, a[11], s=0;
vector <string> v;
void print(int i){
    string s="";
    for (int j=1; j<=i; j++) s+=char(48+a[j]);
    v.push_back(s);
}

void Try(int i){
    for (int j=a[i-1]; j>=1; j--){
        a[i]=j;
        s+=j;
        if(s>=n){ 
            if (s==n) print(i);
        }
        else 
            Try(i+1);
        s-=j;
    }
}

void solve(){
    cin >> n;
    s=0;
    a[0]=n-1;
    v.clear();
    Try(1);
    cout << v.size()+1 << endl;
    cout << "(" << n << ") ";
    for (int i=0; i<v.size(); i++){
        string s=v[i];
        cout << '(' << s[0];
        for (int j=1; j<s.size(); j++) cout << " " << s[j];
        cout << ") ";
    }
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