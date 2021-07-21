#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main(){
    faster();
    int n;
    cin >> n;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            int c=0;
            while (n>1 && n%i==0){
                c++;
                n/=i;
            }
            cout << i << " " << c <<endl;
        }
    }
    if (n>1) cout << n << " " << 1 << endl;
    return 0;
}


