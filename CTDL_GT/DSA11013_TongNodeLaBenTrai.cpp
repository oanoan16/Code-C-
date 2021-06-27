#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <vector <int>> g;
int sum=0;

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

void sumLeft(Node *node, char x){
    if (node==NULL) return;
    if (x=='L' && node->left==NULL && node->right==NULL){
        sum+=node->data;
        return;
    } 
    sumLeft(node->left, 'L');
    sumLeft(node->right, 'R');    
}

void solve(){
    int n;
    cin >> n;
    sum=0;
    map <int, Node*> m;
    Node* root=NULL;
    for (int i=0; i<n; i++){
        int u, v;
        char x;
        cin >> u >> v >> x;
        if (m.find(u)==m.end()){
            Node* n=createNode(u);
            m[u]=n;
            if (root==NULL) root=n;
        }
        Node* node=m[u];
        Node* newNode=createNode(v);
        if (x=='L') node->left = newNode;
        else node->right = newNode;
        m[v]=newNode;
    }
    sumLeft(root, '\0');
    cout << sum << endl;
    
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


