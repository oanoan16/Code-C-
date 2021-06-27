#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n;
void Try(string s){
    if (s.size()==n){
        int c=1;
        for (int i=0; i<n/2; i++)
            if (s[i]!=s[n-i-1]) c=0;
        if (c){
            for (int i=0; i<n; i++) cout << s[i] << " ";
            cout << endl;
        }
    }
    else {
        Try(s+'0');
        Try(s+'1');
    }
}

void solve(){
    cin >> n;
    Try("");
    cout << endl; 
}   

int main()
{
    faster();
    solve();
    return 0;
}
