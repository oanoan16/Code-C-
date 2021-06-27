#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void findMin(int n, int s){
    int a[n];
    s--;
    for (int i=n-1; i>0; i--){
       if (s>9){
           a[i]=9;
           s-=9;
       }
       else{
           a[i]=s;
           s=0;
       }
   }
   a[0]=s+1;
   for (int i=0; i<n; i++) cout << a[i];
   cout << " ";
}

void findMax(int n, int s){
    int a[n];
    for (int i=0; i<n; i++){
       if (s>=9){
           a[i]=9;
           s-=9;
       }
       else{
           a[i]=s;
           s=0;
       }
   }
   for (int i=0; i<n; i++) cout << a[i];
}


void solve(){
    int n, s;
    cin >> n >> s;
    if (s==0 && n==1) cout << 0 << " " <<0;
    else if (s>9*n || s==0) cout << -1 << " " << -1;
    else {
        findMin(n, s);
        findMax(n, s);
    }
    cout << endl;
}

int main(){
    faster();
    int t=1;
//	cin >> t;
	while (t--) solve();
    return 0;
}