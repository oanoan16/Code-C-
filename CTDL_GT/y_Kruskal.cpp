#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> g[20];
int n, k, h[25], a[25][25], c=0, v[25]={0}, d=0, cha[25], hang[25];
vector < pair <int, int > > vp;

struct edge{
    int u, v, w;
};

vector <edge> ve;

bool cmp(const edge &a, const edge &b){
    if (a.w==b.w && a.u==b.u) return (a.v < b.v);
    if (a.w==b.w) return (a.u < b.u);
    return (a.w < b.w);
}

int find(int u){
    if (cha[u]!=u) cha[u]=find(cha[u]);
    return cha[u];
}

bool join(int u, int v){
    u=find(u);
    v=find(v);
    if (u==v) return false;
    if (hang[u]==hang[v]) hang[u]++;
    if (hang[u] < hang[v]) cha[u]=v;
    else cha[v]=u;
    return true;
}

int main(){
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            if ((a[i][j]>0) && i<j){
                ve.push_back(edge());
                ve[c].u=i;
                ve[c].v=j;
                ve[c].w=a[i][j];
                c++;
            }
        }
    }

    for (edge &e:ve){
            cout << e.u<< " " << e.v  << " " << e.w << endl;
        }
     cout << "/////////////" << endl;
    sort (ve.begin(), ve.end(), cmp);
    for (edge &e:ve){
            cout << e.u<< " " << e.v  << " " << e.w << endl;
        }
     cout << "/////////////" << endl;
    for (edge &e:ve){
            // cout << "(" << e.u<< " " << e.v  << ") "<< endl;
        cout << e.w << endl;
        }
    cout << " /////////" << endl;
 for (edge &e:ve){
            cout << "(" << e.u<< " " << e.v  << ") "<< endl;
        }
    for (int i=1; i<=n; i++){
        cha[i]=i;
        hang[i]=0;
    }

    for (edge &e:ve){
        if (join(e.u, e.v)){
            d+=e.w;
            vp.push_back(make_pair(e.u, e.v));
        }
    }

    cout << "dH = " << d << endl;
    for (auto i:vp){
        cout << "(" << i.first << " " << i.second << ")" << endl;
    }
    return 0;
}

// for (edge &e:ve){
    //     cout << e.u<< " " << e.v  << " " << e.w << endl;
    // }