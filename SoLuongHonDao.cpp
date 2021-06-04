#include<bits/stdc++.h>
using namespace std;
int n,m,p[1005][1005];
bool chuaxet[1005][1005];

pair<int, int> a[9];

bool check(int x, int y){//Kiem tra xem co thuoc do thi khong
	return x>=0&&y>=0&&x<n&&y<m;
}

void bfs(int i, int j){
	queue< pair<int, int> > q;
	chuaxet[i][j] = false;
	q.push(make_pair(i,j));
	while(!q.empty()){
		int s = q.front().first;
		int t = q.front().second;
		q.pop();
		for ( int v = 0; v<9; v++){
			int S = a[v].first;
			int T = a[v].second;
			if(check(s+S,t+T) && p[s+S][t+T] && chuaxet[s+S][t+T]){
				chuaxet[s+S][t+T] = false;
				q.push(make_pair(s+S,t+T));
			}
		}
	}
}
void solve(){
	memset(chuaxet, true, sizeof(chuaxet));
	cin >> n >> m;
	for ( int i = 0; i<n; i++){
		for ( int j = 0; j<m; j++){
			cin >> p[i][j];
		}
	}
	int res = 0;
	for ( int i = 0; i<n; i++){
		for ( int j = 0; j<m; j++){
			if(p[i][j]&&chuaxet[i][j]){
				bfs(i,j);
				res++;
			}
		}
	}
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	// Gan huong do thi
	a[0] = make_pair(-1,-1);
	a[1] = make_pair(-1, 0);
	a[2] = make_pair(-1, 1);
	a[3] = make_pair( 0,-1);
	a[4] = make_pair( 0, 0);
	a[5] = make_pair( 0, 1);
	a[6] = make_pair( 1,-1);
	a[7] = make_pair( 1, 0);
	a[8] = make_pair( 1, 1);
	
	while(t--){
		solve();
	}
}
// NV Than



