#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

struct Node{
	string s;
	Node* left;
	Node* right;
};

Node* createNode(string s){
	Node* node = new Node();
	node->s = s;
	node->left = node->right = NULL;
	return node;
}


int atoi(string s){
    int res=0;
    for (int i=0; i<s.size(); i++) res=res*10+(s[i]-48);
    return res;
}

int cal(Node* node){
    if (!node->left && !node->right) return atoi(node->s);
    string str=node->s;
    char c=str[0];
    if (c=='+') return cal(node->left)+ cal(node->right);
    if (c=='-') return cal(node->left)- cal(node->right);
    if (c=='*') return cal(node->left)* cal(node->right);
    if (c=='/') return cal(node->left)/ cal(node->right);
    return 0;
}

void solve(){
    int n;
    cin >> n;
    vector <string> v(n);
    queue <Node* > q;
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=n-1; i>=0; i--){
        string s=v[i];
        if (s.size()==1 && (s[0]=='+' || s[0]=='-' || s[0]=='*' || s[0]=='/')){
            Node* op1=q.front();
            q.pop();
            Node* op2=q.front();
            q.pop();
            Node* node = createNode(s);
            node->left=op2;
            node->right=op1;
            q.push(node);
        }
        else {
            q.push(createNode(s));
        }
    }
    cout << cal(q.front()) << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


