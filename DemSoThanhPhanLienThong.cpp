#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[1005];
vector<int> v[1005];
void dfs(int u){
	chuaxet[u] = false;
    for(int i=0;i<v[u].size();i++)
        if(chuaxet[v[u][i]]){
        chuaxet[v[u][i]]=false;
        dfs(v[u][i]);
    }
}
void solve(){
	memset(chuaxet,true,sizeof(chuaxet));
	for ( int  i=0; i<1005; i++){
		v[i].clear();
	}
	cin >> n >> m;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int res = 0;
	for ( int i = 1; i<=n; i++){
		if(chuaxet[i]){
			dfs(i);
			res++;
		}
	}
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



