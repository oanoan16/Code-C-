#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vi v;
bool prime(int n){
    if (n<2) return false;
    for (int i=2; i<=round(sqrt(n)); i++){
        if (n%i==0) return false;
    }
    return true;
}

int sumDigit(int n){
    int s=0, a, tmp=n;
    while (n){
        a=n%10;
        if (a==2 || a==3 || a==5 || a==7) s+=a;
        else return 0;
        n/=10;
    }
    if (prime(s) && prime(tmp)) return 1;
    return 0; 
}

void vprime(){
	v.push_back(0);
    for (int i=1; i<=99999999; ++i){
        if (sumDigit(i)==1) v.push_back(v[i-1]+1);
        else v.push_back(v[i-1]);
    } 
}

void solve(){
	int a, b;
	cin >> a >> b;
	cout << v[b] - v[a-1] << endl;
}
int main()
{
	faster();
    vprime();
	int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


