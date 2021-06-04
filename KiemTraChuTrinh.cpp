#include<bits/stdc++.h>
using namespace std;
int n,m;
int chuaxet[1005];
vector<int> v[1005];
bool kt;
void dfs(int u){
	chuaxet[u] = 1;
    for(int i=0;i<v[u].size();i++){
        if(!chuaxet[v[u][i]]){
        dfs(v[u][i]);
    	}else if(chuaxet[v[u][i]]==1) kt = true;
    	chuaxet[u] = 2;
    }
}
void solve(){
	memset(chuaxet,0,sizeof(chuaxet));
	for ( int  i=0; i<1005; i++){
		v[i].clear();
	}
	cin >> n >> m;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
	}
	kt = false;
	for (int i = 1; i<=n; i++) {
		dfs(i);
		memset(chuaxet,0, sizeof(chuaxet));
		if(kt) break;
	}
	if(kt) cout << "YES";
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
