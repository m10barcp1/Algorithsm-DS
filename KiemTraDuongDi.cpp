#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],n,m,s,t;
bool chuaxet[1005];
int truoc[1005];
// Dung ma tran ke
void DFS(int u){
    for(int i=1;i<=n;i++)
        if(a[u][i]&&chuaxet[i]){
        chuaxet[i]=false;
        truoc[i] = u;
        DFS(i);
    }
}
void solve(){
    memset(a,0,sizeof(a));
	cin >> n >> m ;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	int q;
	cin >> q;
	while(q--){
		memset(chuaxet,true,sizeof(chuaxet));    
		memset(truoc,0,sizeof(truoc));
		cin >> s >> t;
		DFS(s);
		if(truoc[t]==0) {
			cout << "NO";
		else 
			cout << "YES";
		cout << endl;
		
	}
	
	
}	
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



