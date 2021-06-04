#include<bits/stdc++.h>
using namespace std;
int res;
int n, a[100005];
struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
Node* BST(int a[], int s, int e){
	if(s>e) return NULL;
	int mid = (s+e)/2;
	Node* root = new Node(a[mid]);
	root->left = BST(a,s,mid-1);
	root->right = BST(a,mid+1,e);
	return root;
}
void preO(Node *root){
	if(root==NULL) return;
	if(!root->left && !root->right) res++;
	if(root->left) preO(root->left);
	if(root->right) preO(root->right);
}
void solve(){
	cin >> n;
	for (int i=0; i<n; i++)	cin >> a[i];
	Node *root = BST(a,0,n-1);
	res = 0;
	preO(root);
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



