#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[1005][1005] = {};
int d[1005][1005] = {};
void floyd(){
	for ( int i = 1; i<=n; i++){
		for ( int j = 1; j<=n; j++){
			if(i==j) {
				d[i][j] = 0;
			}else if(a[i][j] == 0){
				d[i][j] = 1e9+7;
			}else{
				d[i][j] = a[i][j];
			}
		}
	}
	for ( int k = 1; k<=n; k++){
		for( int i = 1; i<=n; i++){
			for ( int j = 1; j<=n; j++){
				if(d[i][j] > d[i][k] + d[k][j]){
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}
	int q;
	cin >> q;
	while(q--){
		int x,y;
		cin >> x >> y;
		cout << d[x][y] << endl;
	}
}

void solve(){
	cin >> n >> m;
	for ( int i = 0; i<m; i++){
		int x,y,c;
		cin >> x >> y >> c;
		a[x][y] = c;
		a[y][x] = c;
	}
	floyd();
}
int main(){
		solve();
}
// NV Than



