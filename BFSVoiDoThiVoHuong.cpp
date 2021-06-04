#include<bits/stdc++.h>
using namespace std;
int a[1000][1000],n,m;
bool chuaxet[1000];
// Dung ma tran ke
void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		int t = q.front(); q.pop();
		cout << t << " ";
		for ( int v = 1; v <= n; v++){
			if(chuaxet[v]&&a[t][v]){
				chuaxet[v] = false;
				q.push(v);
			}
		} 
	}
	
}
void solve(){
	int u;
	memset(chuaxet,true,sizeof(chuaxet));
    memset(a,0,sizeof(a));
	cin >> n >> m >> u;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	BFS(u);
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



