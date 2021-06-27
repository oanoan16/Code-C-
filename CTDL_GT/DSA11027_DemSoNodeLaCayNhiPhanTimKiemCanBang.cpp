#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <int> g;
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

// void printTree(Node* node){
//     if (node==NULL) return;
//     cout << node->data << " ";
//     printTree(node->left);
//     printTree(node->right);
// }

Node* avlTree(Node* node, int l, int r){
    int mid=(l+r)/2;
    node=createNode(g[mid]);
    if (l<mid) node->left = avlTree(node->left, l, mid-1);
    if (r>mid) node->right = avlTree(node->right, mid+1, r);
    return node;
}

void leaf(Node* node){
    if (node==NULL) return;
    if (node->left==NULL && node->right==NULL) ans++;
    leaf(node->left);
    leaf(node->right);
}

void solve(){
    int n;
    cin >> n;
    ans=0;
    g.clear();
    g.resize(n);
    for (int i=0; i<n; i++) cin >> g[i];
    sort(g.begin(), g.end());
    Node* node=NULL;
    node = avlTree(node, 0, n-1);
    leaf(node);
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


