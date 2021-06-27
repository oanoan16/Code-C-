#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

// int a[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
ull b[]={6, 28, 496, 8128, 2096128, 33550336, 8589869056, 137438691328, 35184367894528 ,144115187807420416, 2305843008139952128};
// ull c[70];
// void init(){
//     c[0]=1;
//     for (int i=1; i<70; i++) c[i]=c[i-1]*2;
// }

// void perfect(){
//     int j=0;
//     for (int i=0; i<20; i++){
//         int p=a[i];
//         b[j]=c[p-1]*(c[p]-1);
//         j++;
//     }
// }

// int find(int n){
//     int s=0;
//     for (int i=1; i<=sqrt(n); i++){
//         if (n%i==0){
//             if (i*i==n) s+=i;
//             else s+=(i+(n/i));
//         }
//     }
//     s-=n;
//     return s;
// }
void solve(){
    ull n;
    cin >> n;
    int c=0;
    for (int i=0; i<=10; i++){
        if (n==b[i]) c=1;
    } 
    cout << c;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    // init();
    // perfect();
    while (t--) solve();
    return 0;
}


