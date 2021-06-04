#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[100005];
vector<int> v[100005];
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
	for (int i = 0; i<n; i++) {
		if(v[i].empty()) continue;
		for ( int j = 0; j<v[i].size(); i++){
			int x = v[i][j];
			if(v[i].size()!=v[x].size()){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
