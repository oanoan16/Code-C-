#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, a[1000];

void in(int x){
	for (int i=1; i<=x; i++)
		cout << a[i];
	cout << endl;
}

void Try(int x){    
	for (int i=0; i<=1; i++){
		a[x]=i;
		if (x==n) in(n);
		else 
			Try(x+1);
		
	}
}
int main()
{
	cin >> n;
	Try(1);
	return 0;
}

