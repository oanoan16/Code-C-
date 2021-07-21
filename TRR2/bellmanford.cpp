#include <iostream>
#define M 100
#define INF 1000000
using namespace std;
class dothi{
    int n, c[M][M];
    public:
    bool chuaxet[M];
    int s, truoc[M], d[M];
    void readdata();
    void init(int s);
    void dijkstra(int s);
};

void dothi::readdata(){
    cin >>  n >> s;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> c[i][j];
            if (c[i][j]==0){
                c[i][j]=INF;
            }
        }
    }
}

void dothi::init(int s){
    for (int i=1; i<=n; i++){
        d[i]=c[s][i];
        truoc[i]=s;
        chuaxet[i]=true;   // dinh chua co dinh
    }
    d[s]=0;
}

void dothi::dijkstra(int s){
    init(s);
    int k=1;
    while (k<=n-2){
        for (int v=1; v<=n; v++){
            for (int u=1; u<=n; u++){
                if (c[u][v]!=INF && d[u]!=INF && (d[v]>d[u]+c[u][v])){
                    d[v]=d[u]+c[u][v];
                    truoc[v]=u;
                }
            }
        }
        k++;
    }
    
    for (int t=1; t<=n; t++){
        if (d[t]==INF){ // khong co duong di tu s den t
            cout << "\nK/c " << s << " -> " << t<< " = INF;";
        }
        else{
            cout << "\nK/c " << s << " -> " <<t << " = " <<d[t] << "; ";
            cout << "\t" << t << "<-";
            int truoctmp=truoc[t];
            while (truoctmp!=s){
                cout <<truoctmp <<" <- ";
                truoctmp=truoc[truoctmp];
            }
            cout << s ;
        }
    }
}

int main(){
    dothi g;
    g.readdata();
    g.dijkstra(g.s);
}
