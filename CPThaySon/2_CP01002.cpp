#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
    ull a[21], s=0;
    a[1]=1;
    for (int i=2; i<21; ++i) a[i]=a[i-1]*i;
	int n;
    cin >> n;
    for (int i=1; i<=n; ++i) s+=a[i];
    cout << s;
    return 0;
}


