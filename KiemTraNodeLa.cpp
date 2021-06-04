#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
void taoLa(Node *root, int nhanh2, char huong){
	if(huong == 'L') {
		root->left = new Node(nhanh2);
	}else{
		root->right = new Node(nhanh2);
	}
}
void chen(Node *root, int nhanh1, int nhanh2, char huong){
	if(root==NULL) return;
	if(root->data==nhanh1){
		taoLa(root,nhanh2,huong);
	}else{
		chen(root->left,nhanh1, nhanh2, huong);
		chen(root->right,nhanh1, nhanh2, huong);
	}
}
int chieucao(Node *root){
	if(!root) return 0;
	return (1+max(chieucao(root->left),chieucao(root->right)));
}
bool check(Node *root, int chieudai, int chieucao){
	if(!root) return true;
	if(!root->left&&!root->right&&chieudai<chieucao) return false;
	return check(root->left,chieudai+1,chieucao) && check(root->right,chieudai+1,chieucao);  
}
bool laNodeLa(Node *root){
	return check(root,1,chieucao(root));
}

void solve(){
	int n;
	cin >> n;
	Node *root = NULL;
	while(n--){
		int nhanh1, nhanh2;
		char huong;
		cin >> nhanh1 >> nhanh2;
		cin >> huong;
		if(root==NULL){
			root = new Node(nhanh1);
			taoLa(root, nhanh2, huong);
		}else{
			chen(root, nhanh1, nhanh2, huong);
		}
	}
	if(laNodeLa(root)) cout << 1;
	else cout << 0;
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



