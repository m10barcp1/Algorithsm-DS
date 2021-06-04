#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],n,m;
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
void ghinhan(int s, int t){
	if(truoc[t]==0) {
		cout << "-1";
		return;
	}
	int i = t;
	vector<int> v;
	v.push_back(t);
    while(truoc[i] != s){
        v.push_back(truoc[i]);
        i=truoc[i];
    }
    v.push_back(s);
    for ( int i = v.size() - 1; i>=0; i--){
    	cout << v[i] << " ";
	}
}
void solve(){
	int s,t;
	memset(chuaxet,true,sizeof(chuaxet));
    memset(a,0,sizeof(a));
    memset(truoc,0,sizeof(truoc));
	cin >> n >> m >> s >> t;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		a[x][y] = 1;
	}
	DFS(s);
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
