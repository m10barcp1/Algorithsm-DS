#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
int n,m,s,t;
vector<int> v[1005];
int truoc[1005];
void dfs(int u){
	stack<int> s;
	s.push(u);
	chuaxet[u] = false;
    while(!s.empty()){
        int l=s.top(); s.pop();
        for(int i=0;i<v[l].size();i++){
        	int z = v[l][i];
		   	if(chuaxet[z]){
        	    chuaxet[z]=false;
            	s.push(l);
           	 	s.push(z);
           		truoc[z] = l;
            	break;
        	}
        }
    }
}
void ghinhan(int s, int t){
	if(truoc[t]==0) {
		cout << "-1";
		return;
	}
	int i = t;
	vector<int> vt;
	vt.push_back(t);
    while(truoc[i] != s){
        vt.push_back(truoc[i]);
        i=truoc[i];
    }
    vt.push_back(s);
    for ( int i = vt.size() - 1; i>=0; i--){
    	cout << vt[i] << " ";
	}
}
void solve(){
	memset(chuaxet,true,sizeof(chuaxet));
	for ( int i = 0; i<1005; i++){
		v[i].clear();
	}
	cin >> n >> m >> s >> t;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);	
	}
	dfs(s);
	ghinhan(s,t);
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



