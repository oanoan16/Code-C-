#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, k, a[15], v[205], r[100][100], s, cnt=0, l, h, sum;
int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 
59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 
137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};

void Try(int i){
    if (i>n || sum>s) return;
    for (int j=l; j<=h; j++){
        int x=prime[j];
        if (v[x]==0 && x>a[i-1]){
            v[x]=1;
            a[i]=x;
            sum+=x;
            if (i==n){
                if (sum==s){
                    cnt++;
                    for (int e=1; e<=n; e++) r[cnt][e]=a[e];
                }
            }
            else Try(i+1);
            sum-=x;
            v[x]=0;
        }
    }
}

void solve(){
    cin >> n >> k >> s;
    sum=0;
    cnt=0;
    l=0, h=0;
    while (prime[l]<k) l++;
    a[0]=prime[l];
    while (prime[h]<s-2) h++;
    memset(v, 0, sizeof(v));
    Try(1);
    cout << cnt << endl;
    for (int i=1; i<=cnt; i++){
        for (int j=1; j<=n; j++) cout << r[i][j] << " ";
        cout << endl;
    }
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}