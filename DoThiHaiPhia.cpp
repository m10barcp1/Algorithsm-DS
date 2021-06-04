#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> vt[1005];
int label[10005];

bool BFS(int u){
	queue<int> q;
	q.push(u);
	label[u] = 1;
	while(!q.empty()){
		int t = q.front(); q.pop();
		for (auto z:vt[t]){
			if(t==z)	return false;
			if(label[z]==-1){
				label[z] = 1 - label[t];
				q.push(z);
			}else if(label[z] == label[t]) return false; 	
		}
	}
	return true;
}


bool dothihaiphia(){
	for ( int i = 1; i<=n; i++){
		if(label[i]==-1{
			if(!BFS(i)) return false;
		}
	}
	return true;
}

void solve(){
	memset(label,-1,sizeof(label));
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
        vt[i].clear();
    }
	for ( int i = 0; i<n; i++){
		int x,y;
		cin >> x >> y;
		vt[x].push_back(y);
		vt[y].push_back(x);
	}
	if(dothihaiphia()) cout << "YES";
	else cout << "NO";
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



