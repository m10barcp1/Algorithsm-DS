#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
int n,m,k;
vector<int> v[1005];
void dfs(int u){
	stack<int> s;
	s.push(u);
	cout << u << " ";
	chuaxet[u] = false;
    while(!s.empty()){
        int t=s.top(); s.pop();
        for(int i=0;i<v[t].size();i++){
        	int z = v[t][i];
		   	if(chuaxet[z]){
		   		cout << z << " ";
        	    chuaxet[z]=false;
            	s.push(t);
           	 	s.push(z);
            	break;
        	}
        }
    }
}
void solve(){
	memset(chuaxet,true,sizeof(chuaxet));
	for ( int i = 0; i<1005; i++){
		v[i].clear();
	}
	cin >> n >> m >> k;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
	}
	dfs(k);
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



