#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int a;
    string s;
    cin >> a >> s;
    cout << a << " ";
    int i=s.size()-1;
    while(i>0 && s[i]<=s[i-1]) i--;
    if (i==0) cout << "BIGGEST";
    else{
        int j=s.size()-1;
        while(s[j]<=s[i-1]) j--;
        swap(s[i-1], s[j]);
        sort(s.begin()+i, s.end());
        cout << s;
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


/*
 while(i>0 && s[i]<=s[i-1]) i--;
    if (i==0) cout << "BIGGEST";
    else{
        next_permutation(s.begin(), s.end());
        cout << s;
    }
    cout << endl;
*/