#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 100000
vector < pair <int, int > > vp;

int main(){
    int n, k, a[25][25], v[25], dh=0;
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            if (i!=j && a[i][j]==0) a[i][j]=MAX;
        }
    }
    int sc=1, s[25], t, l, min;
    for (int i=0; i<25; i++) v[i]=1, s[i]=0; 

    s[k]=1;
    v[k]=0;
    while (sc<n){
        min=MAX;
        for (int i=1; i<=n; i++){
            if (s[i]){
                t=s[i];
                for (int j=1; j<=n; j++){
                    if (v[j] && min>a[t][j]){
                        k=t;
                        l=j;
                        min=a[t][j];
                    }
                }
            }
        }
        sc++;
        dh+=min;
        vp.push_back(make_pair(k, l));
        v[l]=0;
        a[k][l]=MAX;
        a[l][k]=MAX;
        s[l]=1;
    }

    cout << "dH = " << " " << dh << endl;
    for (auto i:vp){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}


   