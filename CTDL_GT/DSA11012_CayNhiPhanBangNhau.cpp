#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <vector <int>> g;

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

int cmpTree(Node* node1, Node* node2){
    if (node1==NULL && node2==NULL) return 1;
    if (node1==NULL || node2==NULL) return 0;
    if (node1->data==node2->data && 
    cmpTree(node1->left, node2->left) && 
    cmpTree(node1->right, node2->right))
        return 1;
    return 0;
}

Node* inputTree(){
    int n, root;
    cin >> n;
    g.clear();
    g.resize(N);
    map <int, Node*> m;
    for (int i=0; i<n; i++){
        int u, v;
        char x;
        cin >> u >> v >> x;
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
    return m[root];
}
void solve(){
    Node* node1 = inputTree();
    Node* node2 = inputTree();
    cout << cmpTree(node1, node2) << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


