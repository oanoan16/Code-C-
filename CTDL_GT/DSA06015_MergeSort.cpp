#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void merge(int *a, int l, int m, int r){
    int nl=m-l+1; int nr=r-m;
    int  L[nl]; int R[nr];
    for (int i=0; i<nl; i++) L[i]=a[l+i];
    for (int i=0; i<nr; i++) R[i]=a[m+1+i];
    int i=0, j=0, k=l;
    while (i<nl && j<nr){
        if (L[i]<R[j]){
            a[k++]=L[i++];
        }
        else a[k++]=R[j++];
    }
    while (j<nr) a[k++]=R[j++];
    while (i<nl) a[k++]=L[i++];
}

void mergeSort(int *a, int l, int r){
    if (l<r){
        int m=(l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

void solve(){
    int n, a[MAX];
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    mergeSort(a, 0, n-1);
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


