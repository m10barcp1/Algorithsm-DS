#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],n,m;
bool chuaxet[1005];
// Dung ma tran ke
void DFS(int u){
	cout << u << " ";
	chuaxet[u] = false;
    for(int i=1;i<=n;i++)
        if(a[u][i]&&chuaxet[i]){
        chuaxet[i]=false;
        DFS(i);
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
	DFS(u);
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
