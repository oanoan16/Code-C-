#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

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

void insertNode(Node* &node, int v){
    if (node==NULL){
        node=createNode(v);
        return;
    }
    if (v < node->data) insertNode(node->left, v);
    else insertNode(node->right, v);

}

void checkNode(Node *node, int h){
    if (node->left == NULL && node->right == NULL){
        ans=max(ans, h);
    }
    if(node->left != NULL) checkNode(node->left, h+1);
	if(node->right != NULL) checkNode(node->right, h+1);
}

void solve(){
    ans=0;
    int n, u;
    cin >> n;
    Node* bTree=NULL;
    for (int i=0; i<n; i++){
        cin >> u;
        insertNode(bTree, u);
    }
    checkNode(bTree, 0);
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


