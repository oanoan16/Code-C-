#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <queue>

using namespace std;

struct edge{
    int u, v, w;
};

class dothi{
    int n, a[100][100], ne=0, atree[100][100], dh=0;
    edge edglist[100], edgtree[100];
    vector <edge> ve;
    public:
    bool v[105];
    void readdata();
    void init();
    void dfs(int u);
    void kruskal();
};

bool cmp(const edge &a, const edge &b){
    return a.w < b.w;
}

void dothi::readdata(){
    cin >> n;
    int c=0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n;j++){
            cin >> a[i][j];
            if (a[i][j]>0 && i<j){
                ve.push_back(edge());
                ve[c].u=i;
                ve[c].v=j;
                ve[c].w=a[i][j];
                c++;
            }
        }
    }
}

void dothi::init(){
    for (int i=1; i<100; i++) v[i]=true;
}

void dothi::dfs(int u){
    v[u]=false;
    for (int i=1; i<=n; i++) 
        if (atree[u][i]==1 && v[i]==true) dfs(i);
}

void dothi::kruskal(){
    int net=0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++) atree[i][j]==0;
    }
    dh=0;
    sort (ve.begin(), ve.end(), cmp);
    for (edge &e:ve){
        int n1=e.u, n2=e.v;
        init();
        dfs(n1);
        if (v[n2]==true){
            dh+=e.w;
            net++;
            edgtree[net].u=n1;
            edgtree[net].v=n2;
            atree[n1][n2]=1;
            atree[n2][n1]=1;
        }
    }
    if (net==n-1){
        cout << "dH = " << dh << endl;
        for (int i=1; i<=net; i++) 
            cout << edgtree[i].u << " " << edgtree[i].v <<endl;
    }
    
}
int main(){
    dothi g;
    g.readdata();
    g.kruskal();
    return 0;
}