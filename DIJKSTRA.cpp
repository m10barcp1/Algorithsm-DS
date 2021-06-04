#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > v[1005];
priority_queue<pair<int, int>,vector<pair<int, int> >, greater<pair<int, int> > > pq;
int label[1005], before[1005];
int n,m,s;
void dijkstra(int s){
	for ( int i = 1; i<=n; i++){
		label[i] = 1e9;
		before[i] = -1;
	}
	label[s] = 0;
	while(!pq.empty()) pq.pop();
	pq.push({0,s});
	while(!pq.empty()){
		int  x = pq.top().second; pq.pop();
		for ( int i = 0; i<v[x].size(); i++){
			int t = v[x][i].second;
			int f = v[x][i].first;
			if(label[x] + f < label[t]){
				label[t] = label[x] + f;
				before[t] = x;
				pq.push({label[t], t});
			}
		}
	}
	for ( int i  = 1; i<=n; i++) cout << label[i] << " ";
	cout << endl;
}


void solve(){
	cin >> n >> m >> s;
	for ( int i = 1; i<=n; i++) v[i].clear();
	for ( int i = 0 ; i<m; i++){
		int x,y,z;
		cin >> x >> y >> z;
		v[x].push_back({z,y});
		v[y].push_back({z,x});
	}
	dijkstra(s);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



