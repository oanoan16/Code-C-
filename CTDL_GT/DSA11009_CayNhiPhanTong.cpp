#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <vector <int>> g;
int ans;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data){
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int sum(Node* node){
    if (node->left==NULL && node->right==NULL ) 
        return node->data;
    int s=0;
    if (node->left!=NULL) s+=sum(node->left);
    if (node->right!=NULL) s+=sum(node->right);
    if (s!=node->data) ans=0; 
    return s+node->data;
}

void solve(){
    int n, root, maxn=1;
    ans=1;
    cin >> n;
    g.clear();
    g.resize(N);
    map <int, Node*> m;
    for (int i=0; i<n; i++){
        int u, v;
        char x;
        cin >> u >> v >> x;
        maxn=max(maxn, max(u, v));
        if (i==0) root=u;
        if (m.find(u)==m.end()){
            Node* n=createNode(u);
            m[u]=n;
        }
        Node* node=m[u];
        Node* newNode=createNode(v);
        if (x=='L') node->left = newNode;
        else node->right = newNode;
        m[v]=newNode;
    }
    Node* node = m[root];
    sum(node);
    cout << ans << endl;
    
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


