#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <int> ele;

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

void insertNode(Node* &node, int v){
    if (node==NULL){
        Node* m=createNode(v);
        node=m;
        return;
    }
    if (v < node->data) insertNode(node->left, v);
    else insertNode(node->right, v);

}

void checkNode(Node *node){
    if (node->left == NULL && node->right == NULL){
        ele.push_back(node->data);
        return;
    }
    if(node->left != NULL) checkNode(node->left);
	if(node->right != NULL) checkNode(node->right);
}

void solve(){
    ele.clear();
    int n, u;
    cin >> n;
    Node* bTree=NULL;
    for (int i=0; i<n; i++){
        cin >> u;
        insertNode(bTree, u);
    }
    checkNode(bTree);
    for (auto i:ele) cout << i << " ";
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


