#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std;

struct edge{
    int u, v, w;
};

class dothi{
    int n, a[100][100], ne, atree[100][1000], dh=0;
    edge edglst[1000], edgtree[1000];
    public:
    bool chuaxet[20];
    void readdata();
    void init();
    void dfs(int u);
    void bubblesort();
    void kruskal();
};

void dothi::readdata(){
    cin >> n;
    ne=0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n;j++){
            cin >> a[i][j];
            if (a[i][j]>0 && i<j){
                ne++;
                edglst[ne].w=a[i][j];
                edglst[ne].u=i;
                edglst[ne].v=j;
            }
        }
    }
    
}

void dothi::init(){
    for (int i=0; i<100; i++) chuaxet[i]=true;
}

void dothi::dfs(int u){
    chuaxet[u]=false;
    for (int i=1; i<=n; i++){
        if (atree[u][i]==1 && chuaxet[i]==true) dfs(i);
    }
}

void dothi::bubblesort(){
    for (int i=1; i<=ne; i++){
        for (int j=ne; j>=i+1; j--){
            if (edglst[j].w < edglst[j-1].w){
                edge tmp=edglst[j-1];
                edglst[j-1]=edglst[j];
                edglst[j]=tmp;
            }
        }
    }
}

void dothi::kruskal(){
    int net=0; 
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) atree[i][j]=0;
    dh=0;
    bubblesort();

    for (int i=1; i<=ne; i++) 
        cout << "(" <<edglst[i].u << " " << edglst[i].v << endl;
    cout << " /////////////" << endl;
    for (int i=1; i<=ne; i++) cout << edglst[i].w <<endl;
    for (int i=1; i<=ne; i++){
        int n1=edglst[i].u;
        int n2=edglst[i].v;
        init(); 
        dfs(n1);
        if (chuaxet[n2]==true){
            dh+=edglst[i].w;
            net++;
            edgtree[net].u=n1;
            edgtree[net].v=n2;
            atree[n1][n2]=1;
            atree[n2][n1]=1;
        }
    }
    if (net==n-1){
        cout << " dH = " << dh << endl;
        for (int i=1; i<=net; i++)
            cout << edgtree[i].u << " " << edgtree[i].v << endl;
    }
}

int main(){
    dothi g;
    g.readdata();
    g.kruskal();
}

