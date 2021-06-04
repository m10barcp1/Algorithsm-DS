#include<bits/stdc++.h>
using namespace std;
int n,res;
bool chuaxet[1005];
vector<int> v[1005];
void dfs(int u){
	chuaxet[u] = false;
	res++;
    for(int i=0;i<v[u].size();i++)
        if(chuaxet[v[u][i]]){
        dfs(v[u][i]);
    }
}
void solve(){
	memset(chuaxet,true,sizeof(chuaxet));
	for ( int  i=0; i<1005; i++){
		v[i].clear();
	}
	cin >> n;
	for ( int i = 0; i<n-1; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int check = 0;
	for ( int i = 1; i<=n; i++){
		memset(chuaxet,true,sizeof(chuaxet));
		res = 0;
		dfs(i);
		if(res<n) {
			check = 1;
			break;
		}
	}
	if(check) cout << "NO";
	else cout << "YES";
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
