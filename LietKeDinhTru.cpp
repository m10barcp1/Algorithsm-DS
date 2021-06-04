#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[1005];
vector<int> v[1005];
int check[1005];
void dfs(int u, int del){
	chuaxet[u] = false;
    for(int i=0;i<v[u].size();i++)
        if(chuaxet[v[u][i]] && v[u][i]!=del){
        check[v[u][i]] = 1;
        dfs(v[u][i],del);
    }
}
void lietKeDinhTru(){
	int init = 0;
	for(int i = 1; i <= n; i++){
        if(!check[i]){
            dfs(i,0);
            init++;
            memset(chuaxet,true,sizeof(chuaxet));
        } 
    }
	for ( int i = 1; i<=n; i++){
		int res = 0;
		memset(check,0,sizeof(check));
		for ( int j = 1; j<=n; j++){
			if(j==i) continue;
			if(!check[j]){
				
				dfs(j,i);
				res++;
				memset(chuaxet,true,sizeof(chuaxet));
			}
			
		}
		if(res!= init) cout << i << " ";
	}
	cout << endl;
}
void solve(){
	memset(chuaxet,true,sizeof(chuaxet));
	memset(check,0,sizeof(check));
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
	lietKeDinhTru();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
