#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1005];
bool chuaxet[10005];
// Dung ma tran ke
bool dfs(int u, int dem){
    if(dem == n) return true;
    chuaxet[u] = false;
    // cout<<u<<" ";
    for(int i = 0; i < v[u].size(); i++){
        if(chuaxet[v[u][i]]){
            if(dfs(v[u][i],dem+1)) return true;
        }
    }
    chuaxet[u]=true;
    return false;
}
void solve(){
	for(int i = 0; i < 1005; i++)
        v[i].clear();

    cin>>n>>m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int kt = 0;
    for(int i = 1; i <= n; i++){
    	memset(chuaxet,true,sizeof(chuaxet));
        if(dfs(i,1)){
            kt = 1;
            break;
        }
    }
    if(kt) cout<<1;
	else cout<<0;
	cout << endl;
}
int main (){   
    int T;
    cin>>T;
    while(T--){
        solve();
   }
}
