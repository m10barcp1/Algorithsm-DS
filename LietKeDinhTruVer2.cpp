#include<bits/stdc++.h>
using namespace std;
int a[1000][1000],n,m;
bool chuaxet[1000];
// Dung ma tran ke
void DFS(int u){
	chuaxet[u] = false;
	for ( int i = 1; i<=n; i++){
		if(chuaxet[i]&&a[u][i]){
			chuaxet[i] = false;
			DFS(i);
		}
	}
}
void dinhtru(){
	for ( int i = 1; i<=n; i++){
		memset(chuaxet,true, sizeof(chuaxet));
		chuaxet[i] = false;
		if(i==1) DFS(2);
		else DFS(1);
		int check = 0;
		for ( int j = 1; j<=n; j++) if(chuaxet[j]) {
			check = 1;
			break;
		}
		if(check) cout << i << " ";
	}	
	
}
void solve(){
	memset(chuaxet,true,sizeof(chuaxet));
    memset(a,0,sizeof(a));
	cin >> n >> m;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	dinhtru();
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
