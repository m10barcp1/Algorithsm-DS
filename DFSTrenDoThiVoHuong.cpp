#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005],c[1005],n,m,u;

void dfs(int l){
	for ( int i = 0; i<m; i++){
		if(a[i]==l &&c[b[i]]==0){
			c[b[i]] = 1;
			cout << b[i] << " ";
			dfs(b[i]);
		}
		
		if(b[i]==l &&c[a[i]]==0){
			c[a[i]] = 1;
			cout << a[i] << " ";
			dfs(a[i]);
		}
		
	}
	
}
void solve(){
	cin >> n >> m >> u;
	for ( int i = 0; i<m; i++)	cin >> a[i] >> b[i];
	for(int i=1;i<=n;i++)c[i]=0;
	c[u] = 1;
	cout << u << " ";
	dfs(u);
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than

