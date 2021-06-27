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
    ll n;
    cin >> n;
    queue <ll> q;
    q.push(1);
    while (!q.empty() && q.front()%n!=0){
        ll tmp=q.front();
        q.pop();
        q.push(tmp*10);
        q.push(tmp*10+1);
    }
    
    cout << q.front() << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


