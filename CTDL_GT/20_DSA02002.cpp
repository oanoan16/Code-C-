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
    int n, a[10000], m;
    cin >> n;
    m=n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    vi v;
    while(m--){
        for (int i=m; i>=0; i--) v.push_back(a[i]);
        for (int i=0; i<m; i++) a[i]=a[i]+a[i+1];
    }
    int j=1;
    m=v.size()-1;
    while(j<=n){
        cout << "[";
        for (int i=1; i<=j; i++){
            if (i<j)
                cout << v[m--] << " ";
            else cout << v[m--]<< "] ";
        } 
        j++;
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
void printf(int a[], int b)
{
	cout << "[" << a[1];
	for (int i=2; i<=b; i++)
		cout << " " << a[i];
	cout << "] " ;
}

void Try(int x, int a[])
{
	if (x<1)
		return;
	else
	{
		int b[x];
		for (int i=1; i<x; i++)
			b[i]=a[i]+a[i+1];
		Try(x-1,b);
		printf(a,x);
	}
}
void solve()
{
	int n, i, a[15];
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	Try(n, a);
	cout << endl;
}
*/