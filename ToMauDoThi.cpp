#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int xet[1005];
int n,m,d;

bool check(int u,int i){
	for(int j=0;j<v[u].size();j++)
		if(i==xet[v[u][j]]) return false;
	return true;
}

bool Try(int u){
	if(u==n+1) return true;
	for(int i=1;i<=d;i++){
		if(check(u,i)){
			xet[u]=i;
			if(Try(u+1)) return true;
			xet[u]=0;
		}
	}
	return false;
}
void solve(){
	for(int i = 0; i < 1005; i++)
        v[i].clear();
        memset(xet,0,sizeof(xet));
        cin>>n>>m>>d;
        for(int i = 1; i <= m; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
    if(Try(1)) cout<<"YES";
    else cout<<"NO";
	cout << endl;	
}
int main (){   
    int T;
    cin>>T;
    while(T--){
        solve();
   }
}
