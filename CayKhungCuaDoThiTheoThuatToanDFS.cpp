#include<bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> v[1005];
bool chuaxet[1005];
int start[100005],end[100005];
vector< pair<int, int> > res;// luu ket qua
void dfs(int u){
	//DuyetDFS, gan cac cap dinh 
	int dem = 0;
	stack<int> q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		int t = q.top(); q.pop();
		for ( int i = 0; i<v[t].size(); i++){
			int y = v[t][i];
			if(chuaxet[y]){
				chuaxet[y] = false;
				q.push(t);	q.push(y);
				res.push_back(make_pair(t,y));
				break;
			}
		}
	}
	// Kiem tra xem co cay khung hay khong
	bool kt = false;
	for ( int i = 1; i<=n; i++){
		if(chuaxet[i]) {
			kt = true;
			break;
		}
	}
	// khong co thi in -1
	if(kt) {
		cout << -1 << endl;
		return;
	}else { // co thi in cac cap dinh thoa man tu danh sach res
		for ( int i = 0; i<res.size(); i++){
			cout << res[i].first << " " << res[i].second << endl;
		}
		return;
	}
}

void solve(){
	memset(chuaxet,true, sizeof(chuaxet));
	for ( int i =0 ;i<1005; i++){
		v[i].clear();
	}
	res.clear();
	
	cin >> n >> m >> u;
	for ( int i = 0; i<m; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(u);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



