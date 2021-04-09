#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int k;
// bool comp(int a, int b){
//     return (abs(k-a)<abs(k-b));
void solve(){
    int n, a[100000];
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];

    for (int i=1; i<n; i++){
        int v=abs(a[i]-k);
        int j=i-1;
        if (abs(a[j]-k)>v){
            int tmp=a[i];
            while (abs(a[j]-k)> v && j>=0){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=tmp;
        }
    }
    // sort(a, a+n, compare(k));
    for (int i=0; i<n; i++) cout << a[i] << " ";
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