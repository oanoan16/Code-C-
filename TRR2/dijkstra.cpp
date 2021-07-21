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
    chuaxet[s]=false;
}

void dothi::dijkstra(int s){
    init(s);
    for (int i=1; i<=n; i++){
        if (chuaxet[i]==true){ //tap nhan tam thoi khac rong
            // tap nhan tam thoi be nhat vaf dinh tuong ung voi no
            int u=0, du=INF;
            for (int z=1; z<=n; z++){ // tim u co du=min(dz voi z la cac dinh co nhan tam thoi)
                if (chuaxet[z]==true && d[z]<du){
                    u=z;
                    du=d[z];
                }
            }
            //Cap nhat cac nhan tam thoi
            if (u!=0){ //tim duoc dinh u theo thuat dijkstra
                chuaxet[u]=false; // loai bo u khoi tap nhan tam thoi
                for (int v=1; v<=n; v++){
                    if (chuaxet[v]==true && d[v]>du+c[u][v]){
                        d[v]=du+c[u][v];
                        truoc[v]=u;
                    }
                }
            }
            else { // khong co duong di tu s den i 
                chuaxet[i]=false;
            }
            i=0; //ep vong lap for lai ban dau
        }
    }// ket thuc vong lap for, chuaxet[] cac dinh doi tu true sang false
        // tap nhan tam thoi la rong
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