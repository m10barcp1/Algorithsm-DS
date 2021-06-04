#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[100005];
vector<int> v[100005];
int check[100005];
void dfs(int u, int &dem){
	chuaxet[u] = false;
	dem++;
    for(int i=0;i<v[u].size();i++)
        if(chuaxet[v[u][i]]){
        dfs(v[u][i],dem);
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
		int dem = 0;
		dfs(i,dem);
		res = max(dem,res);
	}
	cout << res << endl;
	cout << endl << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
