#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[1000];
vector<int> v[1005];
bool check[1005][1005];
bool dfs(int s, int t){
	memset(check,true, sizeof(check));
	stack<int> q;
	q.push(1);
	vector<int> res;
	res.push_back(1);
	check[s][t] = false;
	check[t][s] = false;
	while(!q.empty()){
		int t = q.top(); q.pop();
		for ( int p = 0; p < v[t].size(); p++){
			int k = v[t][p];
			if(check[t][k]){
				check[t][k] = false;
				q.push(t);
				q.push(k);
				res.push_back(k);
				break;
			}
		}
		for ( int j = 0; j<v[t].size(); j++){
			int x = v[t][j];
			check[x][t] = false;
		} 
	}
	if(res.size()!=n) return true;
	return false;
}
void solve(){
    for ( int i = 0; i<1005; i++){
    	v[i].clear();
	}
	cin >> n >> m;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	// Duyet canh cau
	vector<int> res;
	for( int i = 1; i<=n; i++){
		for ( int j = 0; j<v[i].size(); j++){
			if(v[i][j]>i){
				if(dfs(i,v[i][j])){
					res.push_back(i);
					res.push_back(v[i][j]);
				}
			}
		}
	}
	for ( int i = 0; i<res.size(); i++){
		cout << res[i] << " ";
	}
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



