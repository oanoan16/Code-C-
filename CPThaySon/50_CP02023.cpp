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
    ll s=0;
    int n, k, c=0, check=0, a[100000], Min=100000000;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i]<0) c++;
        else if (a[i]==0) check=1;
        s+=a[i];
        Min=min(abs(a[i]), Min);
    }
    sort(a, a+n);
    if (k<=c){
        for (int i=0; i<k; i++) s-=a[i]*2;
    }
    else{
        for (int i=0; i<c; i++) s-=a[i]*2;
        if (check!=1){
            int tmp=(k-c)%2;
            if (tmp==1) s-=2*Min;
        }
    }
    cout << s;
}

int main()
{
	faster();
    solve();
    return 0;
}

//     for (int i=0; i<n; i++) cout << a[i] << " "; cout << endl;
// FOR(i, 0, n) sum += abs(A[i]), MIN = min(MIN, abs(A[i]));