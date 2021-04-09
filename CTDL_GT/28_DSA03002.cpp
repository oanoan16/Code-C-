#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, a[20], ans[20];
string s1, s2;

int change5(string s){
    int sum=0;
    for (int i=0; i<s.size(); i++)
        if (s[i]=='5') sum=sum*10+6;
        else sum=sum*10+s[i]-48;
    return sum;
}

int change6(string s){
    int sum=0;
    for (int i=0; i<s.size(); i++)
        if (s[i]=='6') sum=sum*10+5;
        else sum=sum*10+s[i]-48;
    return sum;
}
void solve(){
    cin >> s1 >> s2;
    cout << change6(s1) + change6(s2) << " " << change5(s1) + change5(s2);
}

int main()
{
    faster();
    solve();
    return 0;
}


