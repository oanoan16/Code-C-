#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int a[10005]={0};

int sumdigit(int n){
    int s=0;
    while (n>0){
        s+= n%10;
        n/=10;
    }
    return s;
}

void lucky(){
    for (int i=0; i<10005; i++){
        int b=sumdigit(i);
        if (b==9) a[i]=1;
    }
}

void solve()
{
	string s;
    int sum=0, c=0;
    cin >> s;
    for (auto c:s){
        sum += c -'0';
    }
    if (sum==9 || a[sumdigit(sum)]==1) c=1;
    cout << c << endl;
}

int main()
{	
    faster();
    lucky();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
